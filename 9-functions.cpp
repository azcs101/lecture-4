#include <iostream>

int add(int a, int b) {
	return a + b;
}

void printHello() {
	std::cout << "Hello World";
}

int main() {
	std::cout << add(10, 15) << "\n";
	printHello();
}
