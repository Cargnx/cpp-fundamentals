#include <iostream>
#include <stdexcept>

int Divide(int a, int b) {
    if (b == 0) {
        throw std::runtime_error("Divide by zero");
    }

    return a / b;
}

int main() {
    int num1, num2;

    std::cout << "Enter two numbers for Division: ";
    std::cin >> num1 >> num2;

    try {
        int result = Divide(num1, num2);
        std::cout << "The Result is: " << result << '\n';
    } catch (std::exception &e) {
        std::cerr << e.what() << '\n';
    }

    return 0;
}