#include <iostream>
#include <sys/socket.h>
#include <netinet/in.h>
#include <sys/types.h>

namespace hde {
    class SimpleSocket{
        private:
            int sock;
            struct sockaddr_in address;
        public:
            SimpleSocket(int domain, int service, 
            int protocol, int port, u_long interface);
            virtual void establish_netwrok_connection()=0;


    };
}