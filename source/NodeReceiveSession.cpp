#include <NodeReceiveSession.h>
#include <MessageReadBlock.pb.h>
#include <Parameter.h>

#ifdef _WIN32
#define fseek _fseeki64 
#define ftell _ftelli64
#else
#define fseek fseeko64
#define ftell ftello64
#endif

NodeReceiveSession::NodeReceiveSession( size_t offset , string token )
{
    this->token_        = token;
    this->file_offset_  = offset;
    this->block_offset_ = 0;
}

NodeReceiveSession::~NodeReceiveSession()
{

}

bool NodeReceiveSession::AcceptBlock( uptr<MessageBlockData> data )
{
    auto stream          = Parameter::Instance()->LocalFileStream;
    auto offset          = this->file_offset_ + this->block_offset_;
    auto size            = data->data().size();

    fseek( stream , offset , SEEK_SET );
    auto reads = fwrite((void*)data->data().c_str() , 
                        1 ,
                        size , 
                        stream );
     
    this->block_offset_ += size;

    if ( !data->islast() )
    {
        this->SendRequest();
        return true;
    }
    else
        return false;
} 

void NodeReceiveSession::OnConnect()
{
    this->SendRequest();
}

void NodeReceiveSession::SendRequest()
{
    auto msg = make_uptr( MessageReadBlock );
    msg->set_offset( this->block_offset_ );
    msg->set_size( transfer_size_ );
    msg->set_token( this->token_ );
    this->SendMessage( move_ptr( msg ) );
}
 

