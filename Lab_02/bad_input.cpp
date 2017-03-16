#include <iostream>

int main() {
	std::cout << "please enter a numB: ";
	int input = 0; // set to zero so we
	std::cin >> input;

	// Input will be zero, if the input was a string
	if (input == 0) {
		// error
	}

	std::cin.clear();
	// clears the buffer
	// up to a 1000 numbs until a new line
	std::cin.ignore(1000, '\n');

	// you can now safely cin again


}
