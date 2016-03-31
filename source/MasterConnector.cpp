#include <MasterConnector.h>
#include <MasterSession.h>

MasterConnector::MasterConnector( string address , int port ) 
    : MRT::Connector( address , port )
{

}

MasterConnector::~MasterConnector()
{

}

Session * MasterConnector::CreateSession()
{
    return new MasterSession();
}

void MasterConnector::OnSessionOpen( Session * session )
{

}

void MasterConnector::OnSessionClose( Session * session )
{
    SAFE_DELETE( session );
}
