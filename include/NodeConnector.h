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

#ifndef NODE_CONNECTOR_H_
#define NODE_CONNECTOR_H_

#include <string>
#include <MRT.h>
#include <MelotonSession.h>
#include <Settings.h>
 
using namespace std;
using namespace MRT;

class NodeConnector :
    public Connector
{
public:

    NodeConnector ( string ip , 
                    int port , 
                    size_t fileoffset ,
                    string token , 
                    size_t size );
    ~NodeConnector();

    size_t FileOffset() { return this->file_offset_; };
    string Token() { return this->token_; };

protected:

    // Create a session 
    virtual Session * CreateSession    ( ) override;

    // Callback when a session is created
    virtual void      OnSessionOpen   ( Session * session ) override;

    // Callback after a session is closed
    virtual void      OnSessionClose  ( Session * session ) override;

    size_t file_offset_;
    size_t size_;
    string token_;
};

#endif // !NODE_CONNECTOR_H_ 