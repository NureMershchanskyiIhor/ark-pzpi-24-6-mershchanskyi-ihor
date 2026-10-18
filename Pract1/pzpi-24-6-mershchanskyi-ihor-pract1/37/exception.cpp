#include <iostream>
#include <stdexcept>

double divide(double a, double b) {
    if (b == 0.0) {
        throw std::invalid_argument("Error: divide by 0!");
    }
    return a / b;
}

int main() {
    try {
        double result = divide(10.0, 0.0);
        std::cout << "Result: " << result << "\n";
    } catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << "\n";
    }
}