#pragma once
#include <vector>
#include <string>

class ResultData {
private:
    std::vector<double> results;

public:
    void addResult(double value) { results.push_back(value); }
    bool saveToFile(const std::string& path);
};