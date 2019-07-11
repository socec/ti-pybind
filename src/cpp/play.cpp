#include <calculator.h>
#include <iostream>

int main(int argc, char** argv) {
    Calculator calc;
    int a = 20;
    int b = 22;
    std::cout << a << " + " << b << " = " << calc.add(a, b) << "\n";
    std::cout << a << " * " << b << " = " << calc.multiply(a, b) << "\n";
    return 0;
}
