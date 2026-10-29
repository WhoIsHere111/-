#include "result_data.h"
#include <fstream>
#include <iomanip>

bool ResultData::saveToFile(const std::string& path) {
    std::ofstream file(path);
    if (!file.is_open()) return false;

    file << results.size() << " ";
    for (double val : results) {
        file << std::fixed << std::setprecision(1) << val << " "; // Выведет 60.0
    }
    return true;
}