#include <NodeConnector.h>
#include <MessageBlockData.pb.h>
#include <Settings.h>
#include <Parameter.h>
#include <NodeSendSession.h>
#include <NodeReceiveSession.h>

NodeConnector::NodeConnector( string ip ,
                              int port , 
                              size_t fileoffset , 
                              string token ,
                              size_t size )
    : Connector( ip , port )
{
    this->file_offset_ = fileoffset;
    this->token_       = token;
    this->size_        = size;
}

NodeConnector::~NodeConnector()
{

}

Session * NodeConnector::CreateSession()
{
    if ( Parameter::Instance()->IsUpload )
    {
        return new NodeSendSession( this->file_offset_ , this->token_ , this->size_ );
    }
    else
    {
        return new NodeReceiveSession( this->file_offset_ , this->token_ );
    }
}

void NodeConnector::OnSessionOpen( Session * session )
{
    if ( Parameter::Instance()->IsUpload )
    {
        auto s = scast<NodeSendSession*>( session );
    }
    else
    {
        auto s = scast<NodeReceiveSession*>( session );
    }
}

void NodeConnector::OnSessionClose( Session * session )
{
    if ( session->LastError().Code() != 0 )
    {
        Logger::Error( "<%>%" , session->LastError().Code() ,
                       session->LastError().Message() );
    }

    SAFE_DELETE( session );
}
