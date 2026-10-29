#include "error_handler.h"
#include <iostream>
#include <cstdlib>

void ErrorHandler::fatal(const std::string& func, const std::string& params, const std::string& errorType) {
    std::cerr << "ОШИБКА: " << errorType << "\n"
              << "  Функция: " << func << "\n";
    if (!params.empty()) {
        std::cerr << "  Параметры: " << params << "\n";
    }
    std::exit(1);
}

void ErrorHandler::log(const std::string& func, const std::string& params, const std::string& errorType) {
    std::cerr << "LOG: " << errorType << " в " << func << " (" << params << ")\n";
}