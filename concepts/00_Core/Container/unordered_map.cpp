#include <iostream>
#include <unordered_map>

int unordered_map() {
    std::unordered_map<std::string, int> um;

    um["one"] = 1;
    um["two"] = 2;

    std::cout << "Unordered map contains:\n";
    for (const auto &pair : um) {
        std::cout << pair.first << ": " << pair.second << '\n';
    }

    return 0;
}