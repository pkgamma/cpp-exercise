#include "Calc.h"
#include <iostream>

int Calc::add(int a, int b) {
    return a + b;
}

int main() {
    Calc c;
    std::cout << c.add(1, 4) << std::endl;
}