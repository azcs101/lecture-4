#include <iostream>

int main() {
	long numbers[10] = { 1, 2, 3, 5, 6, 7, 8, 9, 4, 15 };

	for (long * i = numbers; *i < 20; i = i + 1) {
		std::cout << *i << "\n";
	}

	return 0;
}