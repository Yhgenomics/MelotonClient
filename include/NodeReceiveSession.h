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

#ifndef NODE_RECEIVE_SESSION_H_
#define NODE_RECEIVE_SESSION_H_

#include <string>
#include <MelotonSession.h>
#include <Settings.h>
#include <MessageBlockData.pb.h>

using namespace std;

class NodeReceiveSession :
    public MelotonSession
{
public:

    NodeReceiveSession ( size_t offset , string token );
    ~NodeReceiveSession();

    size_t FileOffset  () { return this->file_offset_; };
    string Token       () { return this->token_; };
    bool   AcceptBlock ( uptr<MessageBlockData> data );

protected:

     void OnConnect  () override;

private:

    size_t file_offset_   = 0;
    string token_         = "";
    size_t block_offset_  = 0;
    size_t transfer_size_ = BLOCK_DATA_SIZE;

    void SendRequest();
};

#endif // !NODE_RECEIVE_SESSION_H_ 