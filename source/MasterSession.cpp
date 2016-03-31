#include <MasterSession.h>
#include <MessageOpenFile.pb.h>
#include <Parameter.h>
#include <MessageWrite.pb.h>

MasterSession::MasterSession()
{
   
}

MasterSession::~MasterSession()
{

}

void MasterSession::StartWrite()
{
    file_stream_.open( Parameter::Instance()->LocalPath.c_str() , ios::in | ios::binary );
    
    if ( !file_stream_.is_open() )
    {
        printf( "Error: Can't find local file" );
        this->Close();
        return;
    }

    file_stream_.seekg( 0 , ios::end );
    size_t len = file_stream_.tellg();

    uptr<MessageWrite> write = make_uptr( MessageWrite );
    write->set_offset( 0 );
    write->set_size( len );
    write->set_token( Parameter::Instance()->OpenToken );
    this->SendMessage( move_ptr( write ) );
}

void MasterSession::StartRead()
{

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
