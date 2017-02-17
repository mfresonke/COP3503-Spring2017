#include <iostream>

void printHello();

class Pizza {
	// everything is private by default
	int numToppings;
	int slicesLeft;
public:
	Pizza();
	Pizza(int numToppings);
	bool eat_slice();
	std::string str();
};
