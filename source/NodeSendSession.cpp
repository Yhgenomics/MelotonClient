#include <NodeSendSession.h>
#include <Parameter.h>
#include <MessageBlockData.pb.h>

#ifdef _WIN32
#define fseek _fseeki64 
#define ftell _ftelli64
#else
#define fseek fseeko64
#define ftell ftello64
#endif

NodeSendSession::NodeSendSession( size_t fileoffset , string token , size_t size )
{
    this->file_offset_ = fileoffset;
    this->token_       = token;
    this->size_        = size;
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
    auto   stream       = Parameter::Instance()->LocalFileStream;
    auto   read_size    = this->size_ > this->transfer_size_ ? this->transfer_size_ : this->size_;
    
    char * buffer       = new char[read_size];
    size_t offset       = this->file_offset_ + this->block_offset_;
     
    fseek( stream , offset , SEEK_SET );
    auto reads = fread( buffer , 
                        1 ,
                        read_size , 
                        stream );

    this->size_ -= reads;  

    auto msg = make_uptr( MessageBlockData );
    msg->set_offset     ( this->block_offset_ );
    msg->set_token      ( this->token_ );
    msg->set_size       ( reads );
    msg->set_data       ( buffer , reads );
    msg->set_checksum   ( 0 );
    msg->set_islast     ( this->size_ == 0 || reads < read_size );
    this->SendMessage   ( move_ptr( msg ) );

    this->block_offset_ += reads;
    SAFE_DELETE( buffer );
     
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
