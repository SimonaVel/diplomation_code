#include <iostream>
#include <winsock2.h>
#pragma comment(lib, "Ws2_32.lib")

int main() {
    WSADATA wsaData;
    WSAStartup(MAKEWORD(2,2), &wsaData);

    SOCKET server_fd, new_socket;
    sockaddr_in address;
    int addrlen = sizeof(address);

    server_fd = socket(AF_INET, SOCK_STREAM, 0);

    address.sin_family = AF_INET;
    address.sin_addr.s_addr = INADDR_ANY;
    address.sin_port = htons(5000);

    bind(server_fd, (sockaddr*)&address, sizeof(address));
    listen(server_fd, 3);

    std::cout << "C++ Server started on port 5000...\n";

    while (true) {
        new_socket = accept(server_fd, (sockaddr*)&address, &addrlen);
        const char* msg = "Hello from C++ (Winsock) server!\n";
        send(new_socket, msg, strlen(msg), 0);
        closesocket(new_socket);
    }

    WSACleanup();
    return 0;
}
