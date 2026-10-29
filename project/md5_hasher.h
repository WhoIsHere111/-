#pragma once
#include <string>

class Md5Hasher {
public:
    static std::string hash(const std::string& input);
};