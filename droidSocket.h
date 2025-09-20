#include<iostream>
#include<sys/socket.h>
#include<stdio.h>
#include<netinet/in.h>
#define PORT=8080

//type means to specify the type of protocol
//like is it SOCK_STREAM (gen used for http server)or SOCK_DGRAM etc
//domain checks whether is ipv6 or ipv4 etc. ipv4 :- AF_INET
//protocol :- indicate which protocol will be used
namespace droid{
class droidSocket{
    private:
    struct sockaddr_in adress;
    int sock;
    int connection;
    public:
    droidSocket(int domain,int type,int protocol,int port,u_long machineIp);
    void test_connection(int connect);
    int get_connection();
    int get_sock();
    //to check whether to use bind() or connect() based on server or client
    //vurtual helps to implement run time polymorphism so child function overrides parent
    virtual int connect_to_network(int sock,struct sockaddr * adress,int len)=0;
};
}