#include <iostream>

int vector();
int list();
int map();
int unordered_map();

int main() {
    std::cout << "VECTOR" << '\n';
    vector();
    std::cout << '\n';

    std::cout << "LIST" << '\n';
    list();
    std::cout << '\n';

    std::cout << "MAP" << '\n';
    map();
    std::cout << '\n';

    std::cout << "UNORDERED LIST" << '\n';
    unordered_map();
    std::cout << '\n';

    return 0;
}