#include <iostream>

// Doesn't work because call by value
void swapThatDoesntWork(int a, int b) {
	int temp = a;
	a = b;
	b = temp; // :(
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

int main() {
  int a = 3;
  int b = 5;

  print(a, b);
  swapThatDoesntWork(a, b);

  print(a, b);
  swap(&a, &b);

  print(a, b);
  swapThatsCooler(a, b);

  print(a, b);
}
