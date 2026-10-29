#include "vector_data.h"
#include <fstream>

bool VectorData::loadFromFile(const std::string& path) {
    std::ifstream file(path, std::ios::binary);
    if (!file.is_open()) return false;

    // Читаем количество векторов (4 байта)
    uint32_t count = 0;
    if (!file.read(reinterpret_cast<char*>(&count), sizeof(count))) {
        return false;
    }

    // Защита от слишком большого числа (если файл битый)
    if (count > 10000) return false; 

    vectors.clear();
    vectors.resize(count);

    for (uint32_t i = 0; i < count; ++i) {
        // Читаем размер вектора (4 байта)
        uint32_t size = 0;
        if (!file.read(reinterpret_cast<char*>(&size), sizeof(size))) {
            return false;
        }

        if (size > 10000) return false; // Защита

        vectors[i].resize(size);

        // Читаем значения вектора (по 2 байта)
        for (uint32_t j = 0; j < size; ++j) {
            uint16_t val = 0;
            if (!file.read(reinterpret_cast<char*>(&val), sizeof(val))) {
                return false;
            }
            vectors[i][j] = val;
        }
    }
    return true;
}