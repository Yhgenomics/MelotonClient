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

#ifndef PARAMETER_H_
#define PARAMETER_H_

#include <string>
#include <vector>
#include <fstream>
#include <MessageBlockList.pb.h>
#include <MRT.h>

#define VER_MARJOR 1
#define VER_MINIOR 0

using namespace std;



class Parameter
{
public:

    static Parameter* Instance()
    {
        static Parameter instance_;
        return &instance_;
    }

    int                     MasterPort      = 0;
    bool                    IsUpload        = false;
    string                  MasterAddress;
    string                  RemovePath;
    string                  LocalPath;
    string                  OpenToken;
    
    uptr<MessageBlockList>  BlockList       = nullptr;

    FILE*                   LocalFileStream;
    size_t                  LocalFileSize   = 0;
    FILE*                   RemoteFileStream;
    size_t                  RemoteFileSize  = 0;
};
 
#endif // !PARAMETER_H_ 