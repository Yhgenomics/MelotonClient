/***********************************************************************************
This file is part of Project for Meloton
For the latest info, see  https://github.com/Yhgenomics/MelotonNode.git
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
* Description   : MessageOpenACK handler.
* Creator       : Shubo Yang(shuboyang@yhgenomics.com)
* Date          : 2016-03-30
* Modifed       : 2016-03-30      | Shubo Yang      | Create
***********************************************************************************/

#include <string>
#include <MRT.h>
#include <MessageOpenACK.pb.h>
#include <Parameter.h>
#include <MasterSession.h>

static int MessageOpenACKHandler( MRT::Session * session , uptr<MessageOpenACK> message )
{
    if ( message->code() != 0 )
    {
        printf( "Error: [%d] %s" , message->code() , message->message().c_str() );
        return -1;
    }

    auto token                       = message->token();
    Parameter::Instance()->OpenToken = string( token.c_str() , token.size() );
    MasterSession * master           = ( MasterSession* ) session;

    if ( Parameter::Instance()->IsUpload )
    {
        master->StartWrite();
    }
    else
    {
        master->StartRead();
    }

    return 0;
}
