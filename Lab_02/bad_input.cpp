#include <iostream>

int main() {
	std::cout << "Please enter size of magic square: ";
	int input = 0;
	std::cin >> input;
	// Numerical Input Validation (def didn't show this in class)
	// recommend to just end program
	if (input == invalid) {
		std::cout << "Invalid input. Please enter an odd number b/t 3 and 15" << std::endl;
		return 1337;
	}

	// Erases any String in the buffer for when they enter text
	std::cin.clear();
	std::cin.ignore(1000, '\n');

	// User tries to enter decimal
	double tempIn = 0;
	std::cin >> tempIn;
	if (tempIn != (int)tempIn) {
		std::cout << "You entered a decimal meanie" << std::endl;
		continue;
	}
	// assign tempIn to an integer so you don't go insane.
}
