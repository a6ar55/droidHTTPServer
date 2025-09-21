#include<../include/listenSock.h>

droid::listenSock::listenSock(int domain,int type,int protocol,int port,u_long machineIp,int bklg):bindSock(domain,type,protocol,port,machineIp){
    backlog=bklg;
    start_listening();
    test_connection(listenSocket);
}

void droid::listenSock::start_listening(){
    listenSocket=listen(get_sock(),backlog);
}

