#include <iostream>
#include <math.h>

int main() {
	int input = 0;
	int count = 0;
	std::cout << "Please Input a Number: ";
	std::cin >> input;
	for (int curDiv=1; curDiv <= input; ++curDiv) {
		//if the current divisor divisor divides evenly...
		if (input % curDiv == 0) { 
			//print it!
			std::cout << curDiv << ", ";
			//and increment the counter.
			++count;
		}
	}
	//add a new line for spacing
	std::cout << std::endl;
	//now lets see if it's prime!
	if (count == 2) {
		std::cout << "Whoooo! " << input << " is prime!" << std::endl;
	} else {
		std::cout << input << " is not prime." << std::endl;
	}
	//can be optionally omitted.
	return 0;
}
