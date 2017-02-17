#include "person.h"

int main() {
	//dumbFunction();

	// By Value
	Person p;
	std::cout << p.str() << std::endl;
	Person p2("T-Rev", 2);
	p2.haveBirthday();
	std::cout << p2.str() << std::endl;

	// By Pointer
	Person *personPtr = new Person("Max", 22);
	//std::cout << (*person).str() << std::endl;
	std::cout << personPtr->str() << std::endl;

	// Invalid class instantiation
	Person invalidP("Yo Man", -2);
}

// our "definition" of our standalone function
void dumbFunction() {
	std::cout << "😎" << std::endl;
}

Person::Person() {
	name = "John Smith";
	age = 22;
}

Person::Person(std::string name, int age) : name(name) {
	if (age < 0 || age > 100) {
		throw std::invalid_argument("age is not possible");
	}
	this->age = age;
	// this->name = name;
}

void Person::haveBirthday() {
	++age;
}

std::string Person::str() {
	return "Name: " + name + ", Age: " + std::to_string(age);
}
