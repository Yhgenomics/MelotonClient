#include <MRT.h>
#include <MasterConnector.h>
#include <Parameter.h>
#include <NodeConnector.h>

bool InitialDefaultParameter();
bool ReadParameter( int argc , char * argv[] );
void PrintHelper();
void UploadBlock();
void DownloadBlock();
bool CheckFileExist();

int main( int argc , char * argv[] )
{
    if ( !InitialDefaultParameter() )
        return 1;

    if ( !ReadParameter( argc - 1 , argv + 1 ) )
        return 1;

    if ( !CheckFileExist() )
        return 1;

   Logger::Log( "LocalPath: %" , Parameter::Instance()->LocalPath.c_str() );
   Logger::Log( "RemovePath: %" , Parameter::Instance()->RemovePath.c_str() );
   Logger::Log( "MasterAddress: %" , Parameter::Instance()->MasterAddress.c_str() );
   Logger::Log( "MasterPort: %" , Parameter::Instance()->MasterPort );
   Logger::Log( "Is Upload: %" , ( Parameter::Instance()->IsUpload ? "true" : "false" ) );


    uptr<MasterConnector> connector = make_uptr( MasterConnector , 
                                                 Parameter::Instance()->MasterAddress , 
                                                 Parameter::Instance()->MasterPort );

    MRT::Maraton::Instance()->Regist( move_ptr( connector ) );
    MRT::Maraton::Instance()->Run();

    if ( Parameter::Instance()->IsUpload )
    {
        UploadBlock();
    }
    else
    {
        DownloadBlock();
    }

    return 0;
}

void UploadBlock()
{
    int block_count = Parameter::Instance()->BlockList->blockcount();

    for ( int i = 0; i < block_count; i++ )
    {
        auto token       = Parameter::Instance()->BlockList->token( i );
        auto ip          = Parameter::Instance()->BlockList->ip( i );
        auto port        = Parameter::Instance()->BlockList->port( i );
        auto size        = Parameter::Instance()->BlockList->size( i );
        auto fileOffset  = Parameter::Instance()->BlockList->fileoffset( i );
        auto partid      = Parameter::Instance()->BlockList->partid( i );
      
        Logger::Log( "Prepare to send part %" , partid );

        auto connector = make_uptr( NodeConnector , ip , port , fileOffset , token);
        Maraton::Instance()->Regist( move_ptr(connector) );
        Maraton::Instance()->Run();
    }
}

void DownloadBlock()
{

}

bool InitialDefaultParameter()
{
    Parameter::Instance()->MasterAddress = "127.0.0.1";
    Parameter::Instance()->MasterPort    = 101;
    Parameter::Instance()->IsUpload      = false;
    return true;
}

bool ReadParameter( int argc , char * argv[] )
{
    if ( argc == 1 )
    {
        PrintHelper();
        return false;
    }

    for ( int i = 0; i < ( argc - 1 ); i++ )
    {
        if ( !strcmp( argv[i] , "-m" ) )
        {
            Parameter::Instance()->IsUpload = strcmp( argv[++i] , "p" ) == 0;
        }
        else if ( !strcmp( argv[i] , "-a" ) )
        {
            Parameter::Instance()->MasterAddress = string( argv[++i] );
        }
        else if ( !strcmp( argv[i] , "-p" ) )
        {
            Parameter::Instance()->MasterPort = atoi( argv[++i] );
        }
        else if ( !strcmp( argv[i] , "-r" ) )
        {
            Parameter::Instance()->RemovePath = string( argv[++i] );
        }
        else if ( !strcmp( argv[i] , "-l" ) )
        {
            Parameter::Instance()->LocalPath = string( argv[++i] );
        }
        else
        {
            PrintHelper();
            return false;
        }
    }

    return true;
}

void PrintHelper()
{
    printf( "Meloton Client \r\n" );
    printf( "Version : %d.%d\r\n" , VER_MARJOR , VER_MINIOR );
    printf( "Contact : Shubo Yang (shuboyang@yhgenomics.com)\r\n" );
    printf( "\r\n" );
    printf( "Usage   : MelotonClient <command> <value> [files]" );
    printf( "\r\n" );
    printf( "Command : -m\t <g> download a file\r\n" );
    printf( "            \t <p> upload a file\r\n" );
    printf( "          -a\t <address> for master\r\n" );
    printf( "          -p\t <port> for master\r\n" );
    printf( "          -r\t <remote file path> to download or upload\r\n" );
    printf( "          -l\t <local file path> to download or upload \r\n" );
    printf( "Example : MelotonClient -m p -a 127.0.0.1 -p 100 -r /remotefile -l /localfile" );
    printf( "          this example will upload /localfile to /remote" );
    printf( "\r\n" );
    printf( "          MelotonClient -m g -a 127.0.0.1 -p 100 -r /remotefile -l /localfile" );
    printf( "          this example will download /remote to /localfile" );
}

bool CheckFileExist()
{
    if ( Parameter::Instance()->IsUpload )
    {
        Parameter::Instance()->LocalFileStream.open( Parameter::Instance()->LocalPath , ios::in | ios::binary);

        if ( !Parameter::Instance()->LocalFileStream.is_open() ||
             !Parameter::Instance()->LocalFileStream.good() )
        {
            return false;
        }
    }
    else
    {
        Parameter::Instance()->LocalFileStream.open( Parameter::Instance()->LocalPath , ios::out | ios::binary );

        if ( !Parameter::Instance()->LocalFileStream.is_open() ||
             !Parameter::Instance()->LocalFileStream.good() )
        {
            return false;
        }
    }

    return true;
}