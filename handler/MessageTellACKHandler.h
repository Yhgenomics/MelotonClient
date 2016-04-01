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
* Description   : MessageTellACK handler.
* Creator       : Shubo Yang(shuboyang@yhgenomics.com)
* Date          : 2016-04-01
* Modifed       : 2016-04-01      | Shubo Yang      | Create
***********************************************************************************/

#include <string>
#include <MRT.h>
#include <MessageTellACK.pb.h>
#include <Parameter.h>
#include <MessageRead.pb.h>
#include <MasterSession.h>

static int MessageTellACKHandler( MRT::Session * session , uptr<MessageTellACK> message )
{
    auto master = scast<MasterSession*>( session );

    Parameter::Instance()->RemoteFileSize = message->size();

    auto msg = make_uptr( MessageRead );
    msg->set_offset( 0 );
    msg->set_size( message->size() );
    msg->set_token( Parameter::Instance()->OpenToken );
    master->SendMessage( move_ptr( msg ) );

    return 0;
}
