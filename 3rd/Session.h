/***********************************************************************************
This file is part of Project for MaratonFramework
For the latest info, see  https://github.com/Yhgenomics/MaratonFramework.git

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
* Creator       : 
* Date          : 
* Modifed       : When      | Who       | What
***********************************************************************************/

#ifndef MRT_SESSION_H_
#define MRT_SESSION_H_

#include "Macro.h"
#include "Buffer.h"
#include "uv.h"
#include "Error.h"

NS_MARATON_BEGIN

class Operator;

// @Description : Base class of all sessions
class Session
{
public:

    // Default constructor
    Session( );

    virtual ~Session();

    // Close the session
    // This function will close the network connection
    void  Close    ();
    Error LastError() { return this->error_; };

    PP_DEF( std::string , ip_address )
    PP_DEF( int , port )



protected:
    
    Operator* opt_ =  nullptr;

    // Send data to remote
    // @data : data to send
            void Send       ( uptr<Buffer> data );
    
    // Callback when session is connnecting to remote server
    virtual void OnConnect  ()                    {};

    // Callback when network data is arrived
    // @data : received data 
    virtual void OnRead     ( uptr<Buffer> data ) {};

    // Callback when the data has been send to remote server
    virtual void OnWrite    ( uptr<Buffer> data ) {};

    // Callback when the session is closed
    virtual void OnClose    ()                    {};

private:
    
    enum SessionMode
    {
        kUnknown = 0 ,
        kServer ,
        kClient 
    };

    struct write_token_t
    {
        uv_write_t *        writer;
        uv_buf_t *          buffer;
        Session *           session;
    };

    uv_tcp_t    uv_tcp_         = { 0 };
    std::string ip_address_     = "";
    int         port_           = 0;
    bool        is_connected_   = false;
    Error       error_;

    static void uv_write_callback ( uv_write_t * req, int status );

    friend class Operator;
    friend class Listener;
    friend class Connector;
};

NS_MARATON_END

#endif // !MRT_SESSION_H_