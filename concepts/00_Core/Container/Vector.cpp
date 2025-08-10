#include <iostream>
#include <vector>

int vector() {
    std::vector<int> vec = {1, 2, 3, 4, 5};

    vec.push_back(6); // Add Element to the back

    std::cout << "Vector contains:";
    for (int x : vec)
        std::cout << x << " ";

    std::cout << '\n';

    // Remove Element (e.g first 3 elements)
    vec.erase(vec.begin(), vec.begin()+3);
    std::cout << "Vector contains:";
    for (int x : vec)
        std::cout << x << " ";

    std::cout << '\n';

    return 0;
}