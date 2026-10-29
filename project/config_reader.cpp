#include "config_reader.h"
#include <fstream>
#include <cstdlib>

bool ConfigReader::load() {
    std::string path = filePath;
    if (path.rfind("~/", 0) == 0) {
        const char* home = std::getenv("HOME");
        if (home) path = std::string(home) + path.substr(1);
    }

    std::ifstream file(path);
    if (!file.is_open()) return false;

    std::string line;
    while (std::getline(file, line)) {
        if (line.rfind("LOGIN=", 0) == 0) login = line.substr(6);
        else if (line.rfind("PASSWORD=", 0) == 0) password = line.substr(9);
    }
    return !login.empty() && !password.empty();
}