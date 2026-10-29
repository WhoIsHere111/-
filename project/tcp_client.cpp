#include "tcp_client.h"
#include <sys/socket.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <cstring>
#include <iostream>

TcpClient::~TcpClient() { disconnect(); }

bool TcpClient::connect() {
    sockfd = socket(AF_INET, SOCK_STREAM, 0);
    if (sockfd < 0) return false;

    sockaddr_in serv_addr{};
    serv_addr.sin_family = AF_INET;
    serv_addr.sin_port = htons(port);
    inet_pton(AF_INET, serverAddr.c_str(), &serv_addr.sin_addr);

    if (::connect(sockfd, (struct sockaddr*)&serv_addr, sizeof(serv_addr)) < 0) {
        close(sockfd);
        sockfd = -1;
        return false;
    }
    return true;
}

void TcpClient::disconnect() {
    if (sockfd != -1) {
        close(sockfd);
        sockfd = -1;
    }
}

bool TcpClient::sendText(const std::string& data) {
    return send(sockfd, data.c_str(), data.size(), 0) == (ssize_t)data.size();
}

std::string TcpClient::recvText() {
    char buf[1024] = {0};
    ssize_t n = recv(sockfd, buf, sizeof(buf) - 1, 0);
    if (n <= 0) return "";
    return std::string(buf, n);
}

bool TcpClient::sendBinary(const void* data, size_t size) {
    return send(sockfd, data, size, 0) == (ssize_t)size;
}

bool TcpClient::recvBinary(void* buffer, size_t size) {
    return recv(sockfd, buffer, size, 0) == (ssize_t)size;
}