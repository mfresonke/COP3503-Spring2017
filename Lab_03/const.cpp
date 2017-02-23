#include <iostream>

int main() {
  // non-const, can modify
  int a = 2;
  std::cout << "value of a: " << a << std::endl;
  a = 4;
  a++;
  std::cout << "value of a: " << a << std::endl;

  // can't modify!!
  const int b = 4;
  std::cout << "value of b: " << a << std::endl;
  // Illegal ops
  // b = 5;
  // b++;
  // ++b;
  // b+= 5;

  // Regular ol' pointer
  int aa = 3;
  int bb = 5;
  int *aaPtr = &aa;

  // Modify the value it points to
  *aaPtr = bb;
  std::cout << "value that aaPtr points to: " << *aaPtr << std::endl;
  (*aaPtr)++;
  std::cout << "value that aaPtr points to: " << *aaPtr << std::endl;

  // Modify the pointer itself
  std::cout << "address that aaPtr holds: " << aaPtr << std::endl;
  aaPtr = &bb;
  std::cout << "address that aaPtr holds: " << aaPtr << std::endl;

  /* Const and Pointers */
  // A const pointer to an int
  int * const aConstPtr = &a;
  //aConstPtr = &b; //illegal op, trying to reset address
  *aConstPtr = 12;

  // A pointer to a const int
  int const * aPtrToConst = &a;
  const int * aPtrToConst2 = &a; //equivalent
  aPtrToConst = &b;
  //*aPtrToConst = 12; // illegal op, trying to set value where it points

  // how do we make a
  // a constant pointer to a constant int
  // Can modify neither the poitner value (address)
  //  or the value it points to.
  int const * const aConstPtrToConst = &a;
  //aConstPtrToConst = &b; //illegal op, trying to reset address
  //*aConstPtrToConst = 12; // illegal op, trying to set value where it points
}
