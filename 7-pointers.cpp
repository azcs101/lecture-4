#include <iostream>

int main() {

	int a = 20;
	int b = 10;
	int c = 0;
	float d = 7.4;
	char e = 'c';
	int f = -23;

	int *ptr = &a;

	*ptr = 15;

	std::cout << a << "\n";

	return 0;
}