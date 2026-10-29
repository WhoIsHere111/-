#pragma once
#include <string>

/**
 
@brief Класс для чтения LOGIN и PASSWORD из конфигурационного файла.*/
class ConfigReader {
private:
    std::string filePath;
    std::string login;
    std::string password;

public:
    ConfigReader(const std::string& path) : filePath(path) {}
    bool load();
    std::string getLogin() const { return login; }
    std::string getPassword() const { return password; }
};