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

#ifndef MASTER_CONNECTOR_H_
#define MASTER_CONNECTOR_H_

#include <string>
#include <MRT.h>

using namespace std;
using namespace MRT;

class MasterConnector :
    public MRT::Connector
{
public:

    MasterConnector ( string address , int port );
    ~MasterConnector();

protected:

    // Create a session 
    Session * CreateSession    ( ) override;

    // Callback when a session is created
    void      OnSessionOpen   ( Session * session ) override;

    // Callback after a session is closed
    void      OnSessionClose  ( Session * session ) override;
};

#endif // !MASTER_CONNECTOR_H_ 