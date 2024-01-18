#include <iostream>
#include <sys/socket.h>

namespace hde {
    class SimpleSocket{
        private:
            int connection;
        public:
            SimpleSocket(int domain, int service, int protocol);


    };
}