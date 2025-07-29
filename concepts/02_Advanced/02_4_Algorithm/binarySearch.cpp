#include <iostream>
#include <vector>

int binarySearch(const std::vector<int>& arr, int usrInput, std::size_t low, std::size_t high) {
    while (low <= high) {
        if (std::size_t mid = low + (high - low) / 2; arr[mid] == usrInput) {
            return static_cast<int>(mid); // Cast since index is size_t
        } else if (arr[mid] < usrInput) {
            low = mid + 1;
        } else {
            if (mid == 0) break; // avoid underflow
            high = mid - 1;
        }
    }
    return -1;
}

int main() {
    const std::vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int tempInput;
    std::cout << "Enter a number between 1 and 10: ";
    std::cin >> tempInput;

    const int usrInput = tempInput;  // Now it's const after input

    if (const int result = binarySearch(arr, usrInput, 0, arr.size() - 1); result != -1) {
        std::cout << "Found at index: " << result << '\n';
    } else {
        std::cout << "Not found\n";
    }
}