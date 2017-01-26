#include <iostream>

int main() {
	int input = 0;
	std::cout << "Please Input a Number: ";
	std::cin >> input;
	int testNum = 0;
	bool isPow = false;
	for (int testPow = 1; testNum <= input; ++testPow) {
		testNum = 1;
		for (int i=0; i<testPow; ++i) {
			testNum *= 2;
		}
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


