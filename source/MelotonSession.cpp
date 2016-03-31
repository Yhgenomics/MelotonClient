/***********************************************************************************
This file is part of Project for Meloton
For the latest info, see  https://github.com/Yhgenomics/MelotonClient.git

Copyright 2016 Yhgenomics

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
***********************************************************************************/

/***********************************************************************************
* Description   :
* Creator       : Shubo Yang
* Date          :
* Modifed       : When      | Who       | What
***********************************************************************************/

#include <MelotonSession.h>
#include <MessageHub.h>

MelotonSession::MelotonSession()
{
    static size_t SessionId = 10000;
    this->id_               = SessionId;
    SessionId               = (++SessionId % 0xFFFFFFFFFFul);
    this->parse_state_      = MelotonSessionParseState::kHead;
}

MelotonSession::~MelotonSession()
{
}

void MelotonSession::SendMessage( uptr<google::protobuf::Message> message )
{ 
    uptr<MRT::Buffer> head   = make_uptr( MRT::Buffer , "YH" );
    uptr<MRT::Buffer> length = make_uptr( MRT::Buffer , 4 );
    uptr<MRT::Buffer> body   = MessageHub::Build( message.get( ) );

    *( ( int* ) length->Data( ) ) = ( int ) body->Size( );
    
    this->Send( move_ptr( head ) );
    this->Send( move_ptr( length ) );
    this->Send( move_ptr( body ) );
}

void MelotonSession::OnConnect( )
{

}

void MelotonSession::OnRead( uptr<Buffer> data )
{
    this->circle_buffer_.Push( move_ptr( data ) );
    this->dispatch_message( this->circle_buffer_ );
}

void MelotonSession::OnWrite( uptr<Buffer> data )
{

}

void MelotonSession::OnClose( )
{

}

void MelotonSession::dispatch_message( MRT::CircleBuffer & buffer )
{
    while ( true )
    {
        switch ( this->parse_state_ )
        {
            case MelotonSessionParseState::kHead:
                {
                    auto buf = buffer.Pop( 2 );

                    if ( buf == nullptr )return;

                    if ( buf->Data( )[0] == 'Y' &&
                         buf->Data( )[1] == 'H' )
                    {
                        this->parse_state_ = MelotonSessionParseState::kLength;
                    }
                }break;
            case MelotonSessionParseState::kLength:
                {
                    auto buf = buffer.Pop( 4 );

                    if ( buf == nullptr )return;

                    int len = *( ( int * ) buf->Data( ) );

                    if ( len > MAX_CIRCLE_BUFFER_SIZE )
                    {
                        this->parse_state_ = MelotonSessionParseState::kHead;
                        break;
                    }

                    body_length_        = len;
                    this->parse_state_  = MelotonSessionParseState::kBody;
                }break;
            case MelotonSessionParseState::kBody:
                {
                    auto buf = buffer.Pop( body_length_ );

                    if ( buf == nullptr )return;

                    auto result = MessageHub::Handle( this , 
                                                      buf->Data( ) , 
                                                      buf->Size( ) );

                    if ( result < 0 )
                    {
                        this->Close( );
                        return;
                    }

                    body_length_        = 0;
                    this->parse_state_  = MelotonSessionParseState::kHead;
                }break;
            default:
                {
                    this->parse_state_ = MelotonSessionParseState::kHead;
                }
                break;
        }
    }
}
