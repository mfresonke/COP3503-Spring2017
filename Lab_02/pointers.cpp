#include <iostream>

// Passed by value
void swap(int a, int b) {
  int temp = a;
  a = b;
  b = temp;
}

void swapWithPtrs(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

void swapWithPtrs2(int *a, int *b) {
  int *temp = a;
  a = b;
  b = temp;
}

void print(int a, int b) {
  std::cout << "the value of a is " << a << std::endl;
  std::cout << "the value of b is " << b << std::endl;
  std::cout << std::endl;
}

int main() {
  int a = 2;
  int b = 4;
  int *aPtr = &a;
  print(a, b);
  swapWithPtrs2(&a, &b);
  print(a, b);

  // int *aPtr = &a;
  // int **aDoublePtr = &aPtr;

  // std::cout << "the address that aPtr points to is " << aPtr << std::endl;
  // std::cout << "the address that aPtr points to is " << *aPtr << std::endl;
  // std::cout << "the address that aPtr points to is " << *aPtr << std::endl;
}
