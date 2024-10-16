#include <iostream>
#include "calculator.h"

int main() {
    Calculator calc;
    // 18 plus 3
    std::cout << "Result: " << calc.Add(18.0, 3.0) << std::endl;
    // 7 multiply 21
    std::cout << "Result: " << calc.Mul(7.0, 21.0) << std::endl;
    return 0;
}
