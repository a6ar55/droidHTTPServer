#include<iostream>
#include<stdio.h>
#include "../include/bindSock.h"
namespace droid{
    class listenSock : public bindSock{
        private:
            int listenSocket;
            int backlog;
        public:
            //This is the socket at the server side which waits/listens for clients
            //backlog is the no of clients waiting in the queue to get connected
            listenSock(int domain,int type,int protocol,int port,u_long machineIp,int bklg);
            void start_listening();
    };
}