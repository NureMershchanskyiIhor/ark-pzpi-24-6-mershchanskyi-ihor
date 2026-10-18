#include <iostream>
#include <memory>

struct Resource {
    Resource() { std::cout << "Created\n"; }
    ~Resource() { std::cout << "Deleted\n"; }
    void action() { std::cout << "Working...\n"; }
};

int main() {
    std::unique_ptr<Resource> ptr1 = std::make_unique<Resource>();
    ptr1->action();

    {
        std::shared_ptr<Resource> ptr2 = std::make_shared<Resource>();
        std::shared_ptr<Resource> ptr3 = ptr2;
    } // ptr2 та ptr3 знищуються, пам'ять звільняється автоматично

    return 0; // ptr1 знищується при завершенні програми
}