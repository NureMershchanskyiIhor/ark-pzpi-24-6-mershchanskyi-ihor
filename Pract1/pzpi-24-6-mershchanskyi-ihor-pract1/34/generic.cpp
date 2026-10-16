#include <iostream>
#include <vector>
#include <concepts>

template <typename T>
requires std::isArithmeticV<T>
T calculateTotalSum(const std::vector<T>& items) {
    T total = 0;
    for (const auto& item : items) {
        total += item;
    }
    return total;
}

int main() {
    std::vector<int> intNumbers = {10, 20, 30, 40};
    std::cout << "Integer sum: " << calculateTotalSum(intNumbers) << "\n";

    std::vector<double> doubleNumbers = {5.5, 2.1, 3.4};
    std::cout << "Double sum: " << calculateTotalSum(doubleNumbers) << "\n";

    return 0;
}