#include <calculator.h>

int64_t Calculator::add(int64_t a, int64_t b) {
    return a + b;
}

int64_t Calculator::add(std::vector<int64_t> v) {
    int64_t sum = 0;
    for (auto i : v) {
        sum += i;
    }
    return sum;
}

int64_t Calculator::multiply(int64_t a, int64_t b) {
    return a * b;
}

int64_t Calculator::multiply(std::vector<int64_t> v) {
    int64_t product = 1;
    for (auto i : v) {
        product *= i;
    }
    return product;
}
