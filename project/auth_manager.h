#pragma once
#include "tcp_client.h"
#include <string>

class AuthManager {
private:
    TcpClient* client;
    std::string login;
    std::string password;

public:
    AuthManager(TcpClient* c, const std::string& l, const std::string& p)
        : client(c), login(l), password(p) {}
    bool authenticate();
};