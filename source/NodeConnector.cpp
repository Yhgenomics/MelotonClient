#include <NodeConnector.h>
#include <MessageBlockData.pb.h>
#include <Settings.h>
#include <Parameter.h>

NodeConnector::NodeConnector( string ip , int port , size_t fileoffset , string token )
    : Connector( ip , port )
{
    this->file_offset_ = fileoffset;
    this->token_       = token;
}

NodeConnector::~NodeConnector()
{

}

Session * NodeConnector::CreateSession()
{
    return new NodeSession( this->file_offset_ , this->token_ );
}

void NodeConnector::OnSessionOpen( Session * session )
{

}

void NodeConnector::OnSessionClose( Session * session )
{
    SAFE_DELETE( session );
}

NodeSession::NodeSession( size_t fileoffset , string token )
{
    this->file_offset_ = fileoffset;
    this->token_       = token;
}

NodeSession::~NodeSession()
{

}

void NodeSession::OnConnect()
{
    SendData();
}

bool NodeSession::SendData()
{
    auto&  stream =  Parameter::Instance()->LocalFileStream;
    char * buffer = new char[this->transfer_size_];
    size_t offset = this->file_offset_ + this->block_offset_;
     
    stream.seekg( offset , ios::beg );
    stream.read ( buffer , 
                  this->transfer_size_ );

    auto reads = stream.gcount();

    if ( reads == 0 )
    {
        SAFE_DELETE( buffer );
        return false;
    }

    auto msg = make_uptr( MessageBlockData );
    msg->set_offset     ( this->block_offset_ );
    msg->set_token      ( this->token_ );
    msg->set_size       ( reads );
    msg->set_data       ( buffer , reads );
    msg->set_checksum   ( 0 );
    this->SendMessage   ( move_ptr( msg ) );

    this->block_offset_ += reads;
    SAFE_DELETE( buffer );

    Logger::Log( "Send Block Data @ % to %" , 
                 offset , 
                 offset + this->transfer_size_ );

    return true;
}

void NodeSession::AcceptBlock( size_t size , 
                               size_t next_offset , 
                               size_t next_size )
{
    this->block_offset_  = next_offset;
    this->transfer_size_ = next_size;

    if ( next_size == 0 )
    {
        this->Close();
        return;
    }


    if ( !this->SendData() )
    {
        this->Close();
    }
}
