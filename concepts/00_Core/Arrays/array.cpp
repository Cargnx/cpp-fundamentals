#include "array.h"
#include <iostream>

void printArray(const int arr[], int size) {
    std::cout << "Array elements: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }

    std::cout << '\n';
}

int sumArray(const int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }

    return sum;
}
