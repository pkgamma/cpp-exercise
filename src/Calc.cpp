#include "Calc.h"
#include <iostream>

int add(int a, int b) {
    return a + b;
}

int main() {
    std::cout << add(1, 998) << std::endl;
}