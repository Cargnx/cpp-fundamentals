#include <iostream>

#include "array.h"

int main() {
	int numbers[10] = {10, 20, 30, 40, 50};

	printArray(numbers, 5);

	int total = sumArray(numbers, 5);
	std::cout << "Sum of elements: " << total << '\n';

	return 0;
}
