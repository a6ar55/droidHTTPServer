#include<iostream>
#include<sys/socket.h>
#include<stdio.h>

//type means to specify the type of protocol
//like is it SOCK_STREAM (gen used for http server)or SOCK_DGRAM etc
//domain checks whether is ipv6 or ipv4 etc. ipv4 :- AF_INET
//protocol :- indicate which protocol will be used
namespace droid{
class droidSocket{
    private:
    int connection;
    public:
    droidSocket(int protocol,int domain,int type);
    bool test_connection(int connection);
    int get_connection();
};
}