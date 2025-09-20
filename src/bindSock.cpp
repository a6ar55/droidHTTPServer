#include<../include/bindSock.h>


droid::bindSock::bindSock(int domain,int type,int protocol,int port,u_long machineIp):droidSocket(domain,type,protocol,port,machineIp){
    set_connection(connect_to_network(get_sock(),get_adress()));
    test_connection(get_connection());
}


int droid::bindSock::connect_to_network(int sock,struct sockaddr_in adress){
    return bind(sock,(struct sockaddr *)&adress,sizeof(adress));
}