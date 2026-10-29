#include "protocol_handler.h"
#include <cstdint>

bool ProtocolHandler::executeSession(const VectorData& vectors, ResultData& results) {
    uint32_t count = static_cast<uint32_t>(vectors.getCount());
    if (!client->sendBinary(&count, sizeof(count))) return false;

    for (size_t i = 0; i < vectors.getCount(); ++i) {
        uint32_t size = static_cast<uint32_t>(vectors.getVectorSize(i));
        if (!client->sendBinary(&size, sizeof(size))) return false;

        if (!client->sendBinary(vectors.getVector(i).data(), size * sizeof(uint16_t))) return false;

        uint16_t result = 0; // Читаем 2 байта
        if (!client->recvBinary(&result, sizeof(result))) return false;

        results.addResult(result); // передаем в ResultData
    }
    return true;
}