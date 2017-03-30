#include <iostream>

int fib(int);

int main() {
	int n = 100;
	std::cout << "fib(" << n << "): " << fib(n) << std::endl;
}
// 0 1 2 3 4 5 6
// 0 1 1 2 3 5 8
int fib(int n) {
	// Base Case: You know an answer
	if (n == 0) {
		return 0;
	} else if (n == 1) {
		return 1;
	}

	// Recursive Case
	return fib(n-1) + fib(n-2);
}
