#pragma once
#include <vector>
#include <string>
#include <cstdint>

class VectorData {
private:
    std::vector<std::vector<uint16_t>> vectors;

public:
    bool loadFromFile(const std::string& path);
    size_t getCount() const { return vectors.size(); }
    size_t getVectorSize(size_t index) const { return vectors[index].size(); }
    const std::vector<uint16_t>& getVector(size_t index) const { return vectors[index]; }
};