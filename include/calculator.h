#pragma once

#include <cstdint>
#include <vector>

class Calculator {
public:
    Calculator() {}

    int64_t add(int64_t a, int64_t b);
    int64_t add(std::vector<int64_t> v);
    int64_t multiply(int64_t a, int64_t b);
    int64_t multiply(std::vector<int64_t> v);
};
