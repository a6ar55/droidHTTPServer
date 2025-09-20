#include<iostream>
#include<stdio.h>
#include<./droidSocket.h>

namespace droid{
class bindSock : public droidSocket{
    public:
        bindSock(int domain,int type,int protocol,int port,u_long machineIp):droidSocket(domain,type,protocol,port,machineIp){}
        int connect_to_network(int sock,struct sockaddr_in  adress);

    };

}