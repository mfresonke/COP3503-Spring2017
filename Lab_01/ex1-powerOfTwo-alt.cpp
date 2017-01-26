#include <iostream>
#include <math.h>

int main() {
	std::cout << "Please Insert a number: ";
	int input = 0;
	std::cin >> input;
	double result = log2( input );
	if (result == (int)result) {
		std::cout << "Power of Two! :)" << std::endl;
	} else {
		std::cout << "Not Power of Two. :(" << std::endl;
	}
}
