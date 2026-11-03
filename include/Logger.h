#pragma once

#include <iostream>
#include <vector>
#include <algorithm>
#include <random>

class Logger {
public:
    static void log(const std::string& message) {
        std::cout << message << std::endl;
        // Add some dummy processing to slow down compilation
        std::vector<int> numbers(100000);
        std::generate(numbers.begin(), numbers.end(), []() { return rand() % 1000; });
        std::sort(numbers.begin(), numbers.end());
    }
};
