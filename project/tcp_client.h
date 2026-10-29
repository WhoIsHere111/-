#pragma once
#include <string>
#include <cstdint>

class TcpClient {
private:
    int sockfd = -1;
    std::string serverAddr;
    uint16_t port;

public:
    TcpClient(const std::string& addr, uint16_t p) : serverAddr(addr), port(p) {}
    ~TcpClient();

    bool connect();
    void disconnect();
    bool sendText(const std::string& data);
    std::string recvText();
    bool sendBinary(const void* data, size_t size);
    bool recvBinary(void* buffer, size_t size);
    bool isConnected() const { return sockfd != -1; }
};