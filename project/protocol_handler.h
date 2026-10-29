#pragma once
#include "tcp_client.h"
#include "vector_data.h"
#include "result_data.h"

class ProtocolHandler {
private:
    TcpClient* client;

public:
    ProtocolHandler(TcpClient* c) : client(c) {}
    bool executeSession(const VectorData& vectors, ResultData& results);
};