#include <iostream>
#include <optional>
#include <string>

std::optional<std::string> findUserById(int id) {
    if (id == 15) {
        return "John";
    }
    return std::nullopt;
}

int main() {
    auto user = findUserById(100);

    if (user.has_value()) {
        std::cout << "User: " << *user << "\n";
    } else {
        std::cout << "User with this ID does not exist.\n";
    }
}