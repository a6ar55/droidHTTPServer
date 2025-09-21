#include "../../include/droidSocket.h"

    void droid::droidSocket::test_connection(int connect){
        if(connect<0){
            perror("Failed to connect !! 🥹");
            exit(EXIT_FAILURE);
        }
    }
    droid::droidSocket::droidSocket(int domain,int type,int protocol,int port,u_long machineIp){
        adress.sin_family=domain;
        adress.sin_port=port;
        //htonl converts host byte order to network byte order(big endian)
        adress.sin_addr.s_addr=htonl(machineIp);

        sock=socket(domain,type,protocol);
        test_connection(sock);

    }
    int droid::droidSocket::get_connection(){
        return connection;
    }

    int droid::droidSocket::get_sock(){
        return sock;
    }
    struct sockaddr_in  droid::droidSocket::get_adress(){
        return adress;
    }

    int droid::droidSocket:: set_connection(int conn){
        connection=conn;
    }