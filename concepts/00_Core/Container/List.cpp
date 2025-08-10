#include <iostream>
#include <list>

int list() {
    std::list<int> list = {1, 2, 3, 4, 5};

    list.push_back(6); // Add an element to the end

    std::cout << "List contains: ";
    for (auto x : list)
        std::cout << x << " ";

    std::cout << '\n';

    return 0;
}