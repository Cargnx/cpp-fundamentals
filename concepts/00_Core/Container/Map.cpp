#include <iostream>
#include <map>

int map() {
    std::map<std::string, int> m;

    m["one"] = 1;
    m["two"] = 2;

    std::cout << "Map contains:\n";
    for (const auto &pair : m) {
        std::cout << pair.first << ": " << pair.second << '\n';
    }

    return 0;
}