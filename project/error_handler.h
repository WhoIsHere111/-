#pragma once
#include <string>

class ErrorHandler {
public:
    static void fatal(const std::string& func, const std::string& params, const std::string& errorType);
    static void log(const std::string& func, const std::string& params, const std::string& errorType);
};