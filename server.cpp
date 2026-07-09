#include "http_tcpServer.h"

int main()
{
    using namespace http;
    TcpServer server("127.0.0.1", 0);

    if (!server.isRunning())
    {
        return 1;
    }

    server.startListen();
    return 0;
}