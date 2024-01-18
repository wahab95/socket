#include "SimpleSocket.hpp"
#include <sys/socket.h>



hde::SimpleSocket::SimpleSocket(int domain, int service, int protocol){
    connection = socket(domain, service, protocol);
}