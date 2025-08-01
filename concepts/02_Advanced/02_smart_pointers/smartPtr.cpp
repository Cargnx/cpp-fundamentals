#include <iostream>

int main() {
    std::unique_ptr<int> ptr = std::make_unique<int>(5);

    std::cout << *ptr << std::endl;

    return 0;
}