#include <NodeSendSession.h>
#include <Parameter.h>
#include <MessageBlockData.pb.h>

NodeSendSession::NodeSendSession( size_t fileoffset , string token )
{
    this->file_offset_ = fileoffset;
    this->token_       = token;
}

NodeSendSession::~NodeSendSession()
{

}

void NodeSendSession::OnConnect()
{
    SendData();
}

bool NodeSendSession::SendData()
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
        auto msg = make_uptr( MessageBlockData );
        msg->set_offset     ( this->block_offset_ );
        msg->set_token      ( this->token_ );
        msg->set_size       ( reads );
        msg->set_data       ( "" , 0 );
        msg->set_checksum   ( 0 );
        msg->set_islast     ( true );
        this->SendMessage   ( move_ptr( msg ) );

        SAFE_DELETE( buffer );
        return false;
    }

    auto msg = make_uptr( MessageBlockData );
    msg->set_offset     ( this->block_offset_ );
    msg->set_token      ( this->token_ );
    msg->set_size       ( reads );
    msg->set_data       ( buffer , reads );
    msg->set_checksum   ( 0 );
    msg->set_islast     ( false );
    this->SendMessage   ( move_ptr( msg ) );

    this->block_offset_ += reads;
    SAFE_DELETE( buffer );

    Logger::Log( "Send Block Data @ % to %" , 
                 offset , 
                 offset + this->transfer_size_ );

    return true;
}

void NodeSendSession::AcceptBlock( size_t size , 
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
