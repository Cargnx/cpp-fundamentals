#include <iostream>

#include "array.h"

int main() {
	int numbers[10] = {10, 20, 30, 40, 50};

	printArray(numbers, 5);

	int total = sumArray(numbers, 5);
	std::cout << "Sum of elements: " << total << '\n';

	std::cout << '\n';

	char game[3][3] = {
		{'x', 'o', 'o'},
		{'o', 'x', 'x'},
		{'o', 'o', 'x'}
	};

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			std::cout << game[i][j];
		}
		std::cout << '\n';
	}

	return 0;
}
