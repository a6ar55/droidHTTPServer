#include "../include/listenSock.h"
int main(){

    std::cout<<"Starting server !!"<<std::endl;
    std::cout<<"Binding Port !!"<<std::endl;
    droid::bindSock bs= droid::bindSock(AF_INET,SOCK_STREAM,0,5052,INADDR_ANY);
    std::cout<<"Listening for Clients !!"<<std::endl;
    droid::listenSock ls= droid::listenSock(AF_INET,SOCK_STREAM,0,5053,INADDR_ANY,3);
    std::cout<<"Finished Successfully Booyah 😏❤️ !!"<<std::endl;

}