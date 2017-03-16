#include <iostream>

int main() {
	/* ===== Simple Input Validataion ===== */
	std::cout << "Please enter size of magic square: ";
	int input = 0;
	std::cin >> input;
	// Numerical Input Validation (def didn't show this in class)
	// recommend to just end program
	if (inputIsInvalid(input)) {
		std::cout << "Invalid input. Please enter an odd number b/t 3 and 15" << std::endl;
		return 1337;
	}

	/* ===== More Betterer Input Validataion ===== */

	// User tries to enter decimal
	double tempIn = 0;
	std::cin >> tempIn;

	// Erases any String in the buffer for when they enter text.
	// Bad string data remains in the std::cin buffer until the below
	//  lines are called.
	std::cin.clear();
	std::cin.ignore(1000, '\n');

	// Make sure the input is not a decimal
	if (tempIn != (int)tempIn) {
		std::cout << "You entered a decimal meanie" << std::endl;
	}

	// assign tempIn to an integer so you don't go insane.
	input = (int) tempIn;

	if (inputIsInvalid(input)) {
		std::cout << "Invalid input. Please enter an odd number b/t 3 and 15" << std::endl;
		return 1337;
	}
}
