#pragma once
#include <string>
#include <cstdint>

class CommandLineParser {
private:
    std::string serverAddr;
    uint16_t port = 33333;
    std::string inputFile;
    std::string outputFile;
    std::string configFile = "~/.config/vclient.conf"; ///< Значение по умолчанию из ТЗ
    bool helpRequested = false;

public:
    bool parse(int argc, char** argv);
    void printHelp() const;

    std::string getServerAddr() const { return serverAddr; }
    uint16_t getPort() const { return port; }
    std::string getInputFile() const { return inputFile; }
    std::string getOutputFile() const { return outputFile; }
    std::string getConfigFile() const { return configFile; }
};