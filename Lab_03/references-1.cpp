#include <iostream>

// Declaration
void swapThatDoesntWork(int a, int b);
void swap(int *a, int *b);
void swapThatsCooler(int &a, int &b);
void print(int a, int b);

int main() {
	int a = 3;
	int b = 5;
	print(a, b);
	swapThatsCooler(a, b);
	print(a, b);
	// swap(&a, &b);
	// swapThatDoesntWork(a, b);
	// will not be modified

	// // Pointer to A
	// int *aPtr = &a;
	// // Print out value of apointer
	// std::cout << "Value of aPtr: " << aPtr << std::endl;
	// // Print out value of A
	// std::cout << "Value of a: " << *aPtr << std::endl;
}

// Definitions
void swapThatDoesntWork(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
}

void swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void swapThatsCooler(int &a, int &b) {
	int temp = a;
	a = b;
	b = temp;
}

void print(int a, int b) {
  std::cout << "the value of a is " << a << std::endl;
  std::cout << "the value of b is " << b << std::endl;
  std::cout << std::endl;
}
