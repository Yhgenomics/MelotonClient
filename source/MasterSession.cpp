#include <MasterSession.h>
#include <MessageOpenFile.pb.h>
#include <Parameter.h>
#include <MessageWrite.pb.h>
#include <MessageRead.pb.h>
#include <MessageTell.pb.h>

#ifdef _WIN32
#define fseek _fseeki64 
#define ftell _ftelli64
#else
#define fseek fseeko64
#define ftell ftello64
#endif


MasterSession::MasterSession()
{
   
}

MasterSession::~MasterSession()
{

}

void MasterSession::StartWrite()
{ 
    fseek( Parameter::Instance()->LocalFileStream , 0 , SEEK_END );
    size_t len = ftell( Parameter::Instance()->LocalFileStream );

    if ( len == 0 )
    {
        Logger::Log( "the size of local file is zero!" );
        this->Close();
        return;
    }

    Parameter::Instance()->LocalFileSize = len;

    uptr<MessageWrite> write = make_uptr( MessageWrite );
    write->set_offset( 0 );
    write->set_size( len );
    write->set_token( Parameter::Instance()->OpenToken );
    this->SendMessage( move_ptr( write ) );
}

void MasterSession::StartRead()
{ 
    uptr<MessageTell> tell = make_uptr( MessageTell );
    tell->set_token( Parameter::Instance()->OpenToken );
    tell->set_path ( Parameter::Instance()->RemovePath.c_str() , 
                     Parameter::Instance()->RemovePath.size() );

    this->SendMessage( move_ptr( tell ) );
} 

void MasterSession::OnConnect()
{
    uptr<MessageOpenFile> msg = make_uptr( MessageOpenFile );
    msg->set_mode( 1 );
    msg->set_path( Parameter::Instance()->RemovePath );
    this->SendMessage( move_ptr( msg ) );
}

void MasterSession::OnClose()
{

}
