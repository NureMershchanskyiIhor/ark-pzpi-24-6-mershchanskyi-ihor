#include "Calculator.hpp"
#include <iostream>

using std::cout;

int main() {
    Calculator calc;
    
    int addResult = calc.add(5, 3);
    cout << "Add result: " << addResult << "\n";

    int subtractResult = calc.subtract(10, 2);
    cout << "Subtract result: " << subtractResult << "\n";
    
    int multiplyResult = calc.multiply(4, 6);
    cout << "Multiply result: " << multiplyResult << "\n";
    
    int divideResult = calc.divide(25, 5);
    cout << "Divide result: " << divideResult << "\n";
    
    return 0;
}