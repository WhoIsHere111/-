#include "command_line_parser.h"
#include <iostream>
#include <cstring>

bool CommandLineParser::parse(int argc, char** argv) {
	if (argc < 2) { helpRequested = true; return false; }
	for (int i = 1; i < argc; ++i) {
		// Проверка справкиif 
		if(strcmp(argv[i], "-h") == 0) {
			helpRequested = true;
			return false;
		}
		if (strcmp(argv[i], "--help") == 0) {
			helpRequested = true;
			return false;
		}
		// Сервер
		if (strcmp(argv[i], "-s") == 0) {
			if (i + 1 < argc) serverAddr = argv[++i];
		} else if (strcmp(argv[i], "--server") == 0) {
			if (i + 1 < argc) serverAddr = argv[++i];
		}
		// Порт
		else if (strcmp(argv[i], "-p") == 0) {
			if (i + 1 < argc) port = static_cast<uint16_t>(std::stoi(argv[++i]));
		} else if (strcmp(argv[i], "--port") == 0) {
			if (i + 1 < argc) port = static_cast<uint16_t>(std::stoi(argv[++i]));
		}
		// Входной файл
		else if (strcmp(argv[i], "-i") == 0) {
			if (i + 1 < argc) inputFile = argv[++i];
		} else if (strcmp(argv[i], "--input") == 0) {
			if (i + 1 < argc) inputFile = argv[++i];
		}
		// Выходной файл
		else if (strcmp(argv[i], "-o") == 0) {
			if (i + 1 < argc) outputFile = argv[++i];
		} else if (strcmp(argv[i], "--output") == 0) {
			if (i + 1 < argc) outputFile = argv[++i];
		}
		// Конфиг
		else if (strcmp(argv[i], "-c") == 0) {
			if (i + 1 < argc) configFile = argv[++i];
		} else if (strcmp(argv[i], "--config") == 0) {
			if (i + 1 < argc) configFile = argv[++i];
		}
	}
	if (serverAddr.empty()) return false;
	if (inputFile.empty()) return false;
	if (outputFile.empty()) return false;
	
	return true;
}

void CommandLineParser::printHelp() const {
	std::cout << "Использование: vclient -s <server> -i <input> -o <output> [опции]\n"
	<< "Опции:\n"
	<< " -s, --server <адрес> Адрес сервера (обязательно)\n"
	<< " -p, --port <порт> Порт сервера (по умолчанию: 33333)\n"
	<< " -i, --input <файл> Файл с векторами (обязательно)\n"
	<< " -o, --output <файл> Файл для результатов (обязательно)\n"
	<< " -c, --config <файл> Файл конфигурации (по умолчанию: ~/.config/vclient.conf)\n"
	<< " -h, --help Показать эту справку\n";
}