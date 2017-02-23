#include <iostream>
#include <stdexcept> // Needed to throw execptions

void throwEx(int a);

int main() {
	/*
		"Classes" Of Errors:
			1. Runtime
				+ Divide by zero
				+ Derefencing a Null Pointer
			2. Compile-time
				+ Syntax Error
			3. Logic
				+ Off-by-one errors
				+ Bugs
			4. Generated
				+ Thrown Execptions
				+ Non-zero return code
	*/

	/* Execptions:
			Some standard ones to use:
				-invalid_argument
				-out_of_range
				-exception
				-many more...
	*/
	try {
		throwEx(2);
		throwEx(3);
		// since we are only catching exception, we cannot see the specific error message.
	} catch (std::exception e) {
		std::cout << "Execption Error Message: " << e.what() << std::endl;
	}
}

void throwEx(int a) {
	1 + 2;
	"Yo this does something cool";
	int b = a;
	b++;
	if (a == 3) {
		throw std::invalid_argument("you passed in THREE.");
	}
}
