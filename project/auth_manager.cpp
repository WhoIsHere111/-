#include <iostream>
#include "auth_manager.h"
#include "md5_hasher.h"
#include "error_handler.h"

bool AuthManager::authenticate() {
    if (login.empty() || password.empty()) {
        ErrorHandler::fatal("AuthManager::authenticate", "login или password пустые", "Ошибка в конфигурационном файле");
        return false;
    }

    // Шаг 2: отправляем LOGIN
    if (!client->sendText(login + "\n")) {
        ErrorHandler::fatal("AuthManager::authenticate", "Не удалось отправить LOGIN", "Ошибка сети");
        return false;
    }

    // Шаг 3: получаем SALT16 или ERR
    std::string response = client->recvText();
	std::cerr << "DEBUG SALT: [" << response << "]" << std::endl;

    if (response == "ERR") {
        ErrorHandler::fatal("AuthManager::authenticate", "Сервер вернул ERR", "Ошибка идентификации");
        return false;
    }

    if (response.empty()) {
        ErrorHandler::fatal("AuthManager::authenticate", "Сервер закрыл соединение или не отвечает", "Ошибка сети");
        return false;
    }

    // Проверка длины соли
    if (response.length() != 16) {
        ErrorHandler::fatal("AuthManager::authenticate", "SALT16 неверной длины: " + response, "Ошибка протокола");
        return false;
    }

    // Шаг 4: вычисляем и отправляем HASHMD5
    std::string hash = Md5Hasher::hash(response + password);
    if (!client->sendText(hash)) {
        ErrorHandler::fatal("AuthManager::authenticate", "Не удалось отправить HASH", "Ошибка сети");
        return false;
    }

    // Шаг 5: получаем OK или ERR
    response = client->recvText();
    if (response == "OK") {
        return true;
    } else {
        ErrorHandler::fatal("AuthManager::authenticate", "Сервер вернул: " + response, "Ошибка аутентификации");
        return false;
    }
}