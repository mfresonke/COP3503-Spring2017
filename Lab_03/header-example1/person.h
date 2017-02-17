#include <iostream>

// just a function. No class associated.
void dumbFunction();

class Person {
	// everything here is private
	std::string name;
	int age;
public:
	// everything here is public
	Person();
	Person(std::string name, int age);
	void haveBirthday();
	std::string str();
};
