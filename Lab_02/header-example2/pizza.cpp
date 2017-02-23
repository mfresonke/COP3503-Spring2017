#include "pizza.h"

int main() {
	Pizza p;
	std::cout << p.str() << std::endl;
	Pizza p2(234);
	p2.eat_slice();
	std::cout << p2.str() << std::endl;
}

void printHello() {
	std::cout << "hello" << std::endl;
}

Pizza::Pizza() {
	slicesLeft = 8;
	numToppings = 1;
}

Pizza::Pizza(int numToppings) : slicesLeft(8), numToppings(numToppings){}

bool Pizza::eat_slice() {
	if (slicesLeft > 0) {
		--slicesLeft;
		return true;
	}
	return false;
}

std::string Pizza::str() {
	return "Pizza Status=slicesLeft: " + std::to_string(slicesLeft) +
					" numToppings: " + std::to_string(numToppings);
}
