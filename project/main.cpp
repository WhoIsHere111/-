#include <iostream>
#include "command_line_parser.h"
#include "config_reader.h"
#include "vector_data.h"
#include "result_data.h"
#include "tcp_client.h"
#include "auth_manager.h"
#include "protocol_handler.h"
#include "error_handler.h"

int main(int argc, char** argv) {
    try {
        CommandLineParser parser;
        if (!parser.parse(argc, argv)) {
            parser.printHelp();
            return 0;
        }

        ConfigReader config(parser.getConfigFile());
        if (!config.load()) {
            ErrorHandler::fatal("ConfigReader::load", "configFile=" + parser.getConfigFile(), "Не удалось загрузить конфигурацию");
            return 1;
        }

        VectorData vectors;
        if (!vectors.loadFromFile(parser.getInputFile())) {
            ErrorHandler::fatal("VectorData::loadFromFile", "inputFile=" + parser.getInputFile(), "Ошибка чтения файла");
            return 1;
        }

        TcpClient client(parser.getServerAddr(), parser.getPort());
        if (!client.connect()) {
            ErrorHandler::fatal("TcpClient::connect", "server=" + parser.getServerAddr(), "Не удалось подключиться");
            return 1;
        }

        AuthManager auth(&client, config.getLogin(), config.getPassword());
        if (!auth.authenticate()) {
            ErrorHandler::fatal("AuthManager::authenticate", "login=" + config.getLogin(), "Ошибка аутентификации");
            return 1;
        }

        ResultData results;
        ProtocolHandler protocol(&client);
        if (!protocol.executeSession(vectors, results)) {
            ErrorHandler::fatal("ProtocolHandler::executeSession", "", "Ошибка обмена данными");
            return 1;
        }

        client.disconnect();

        if (!results.saveToFile(parser.getOutputFile())) {
            ErrorHandler::fatal("ResultData::saveToFile", "outputFile=" + parser.getOutputFile(), "Ошибка записи результатов");
            return 1;
        }

        return 0;
    } catch (const std::exception& e) {
        ErrorHandler::fatal("main", "", e.what());
        return 1;
    }
}