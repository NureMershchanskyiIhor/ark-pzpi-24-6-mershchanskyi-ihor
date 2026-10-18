#include <iostream>

class ResourceHandler {
private:
    int* data;
public:
    ResourceHandler(size_t size) {
        data = new int[size];
    }

    ~ResourceHandler() {
        delete[] data;
    }

    // Заборона копіювання, захист від подвійного видалення
    ResourceHandler(const ResourceHandler&) = delete;
    ResourceHandler& operator=(const ResourceHandler&) = delete;
};

int main() {    
    {
        ResourceHandler res(100);
        // Використання ресурсу
    } // вихід з області видимості. Деструктор викликається автоматично

    return 0;
}