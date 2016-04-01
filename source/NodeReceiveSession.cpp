#include <NodeReceiveSession.h>
#include <MessageReadBlock.pb.h>
#include <Parameter.h>

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
    auto offset          = this->file_offset_ + this->block_offset_;
    auto size            = data->data().size();
    
    Parameter::Instance()->LocalFileStream.seekg( offset , 
                                                  ios::beg );
    Parameter::Instance()->LocalFileStream.write( data->data().c_str() ,
                                                  data->data().size() );
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
 