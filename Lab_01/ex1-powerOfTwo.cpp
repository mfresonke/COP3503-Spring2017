#include <iostream>
#include <math.h> //Gives us math related funcs.

int main() {
	int input = 0;
	cout << "Please Input a Number: ";
	std::cin >> input;
	int testNum = 0;
	bool isPow = false;
	for (int testPow = 1; testNum <= input; ++testPow) {
		testNum = pow(2, testPow);
		if (testNum == input) {
			isPow = true;
			break;
		}
	}
	if (isPow) {
		std::cout << "Input is Power of Two." << std::endl;
	} else {
		std::cout << "Input is not power of two." << std::endl;
	}
}
