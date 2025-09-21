#include "../include/listenSock.h"

//sends an HTTP response
void send_http_response(int socket,std::string response){
    std::string http_response="HTTP/1.1 200 OK\r\nContent-Length: "+std::to_string(response.length())+"\r\n\r\n"+response;
    send(socket,http_response.c_str(),http_response.length(),0);
}
//reads the request and stores into buffer
void handle_client(int socket){
        char buffer[30000];
        recv(socket,buffer,sizeof(buffer),0);
        std::cout<<"Received Message: "<<buffer<<std::endl;
        send_http_response(socket,"Hi from server !!");

}


//accepts connection and calls to handle each client
void accept_connection(int listener){
    while(1){
        struct sockaddr_in client_adress;
        socklen_t len=sizeof(client_adress);
        std::cout<<"Waiting for connections !!"<<std::endl;
        int new_sock=accept(listener,(struct sockaddr *)&client_adress,(socklen_t *)&len);
        std::cout<<"Accepted Connection"<<std::endl;
        handle_client(new_sock);
        close(new_sock);

    }
}



int main(){

    droid::listenSock listener(AF_INET,SOCK_STREAM,0,htons(8080),INADDR_ANY,5);

    accept_connection(listener.get_sock());

    return 0;
}