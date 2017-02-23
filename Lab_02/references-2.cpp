#include <iostream>

// Invalid: Does not work. Why? Pass by value.
void swap1(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
}

// Valid. Passes pointer value, allowing modification of original values.
void swap2(int *a, int *b) {
	// check a for null
	if (a) {
		std::cout << "a is not null" << std::endl;
	} else {
		std::cout << "a is null" << std::endl;
	}

	// check b for null
	if (b) {
		std::cout << "b is not null" << std::endl;
	} else {
		std::cout << "b is null" << std::endl;
	}

	// if either are null, return.
	if (!a || !b) {
		return;
	}

	int temp = *a;
	*a = *b;
	*b = temp;
}

void swap3(int &a, int &b) {
	int temp = a;
	a = b;
	b = temp;
}

void print(int a, int b) {
  std::cout << "the value of a is " << a << std::endl;
  std::cout << "the value of b is " << b << std::endl;
  std::cout << std::endl;
}

int main() {

	int a = 4;
	swap2(&a, nullptr);

	// more pointer stuff
	int *randomPtr = nullptr;

	if (randomPtr) {
		// is not null
	} else {
		// is null
	}

	int *someVal = new int;
	*someVal = 4;
	delete someVal;
	someVal = nullptr;


	int a = 3;
	int b = 6;
	int *aPtr = &a;
	print(a, b);
	swap3(a, b);
	print(a, b);
}
