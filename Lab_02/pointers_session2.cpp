#include <iostream>

// Function "declarations" -- Would usually go in header file
void print(int a, int b);
void swap(int a, int b);
void swapWithPtrs(int *aPtr, int *bPtr);
void swapWithPtrs2(int *aPtr, int *bPtr);
int* danglingPointers();
int* notDangleYay();

int main() {
  /* ===== Main Lesson ===== */
  // github.com/mfresonke/COP3503-Spring2017
  int a = 5;
  int b = 10;

  // Always init to NULL
  int *aPtr = nullptr;
  int *bPtr = nullptr;

  // & == "Address of"
  aPtr = &a;
  bPtr = &b;
  std::cout << "Address of A is " << aPtr << std::endl; // prints memory address :)

  // * == "Dereference"
  std::cout << "The Value aPtr Points to is " << *aPtr << std::endl;

  print(a, b);
  swapWithPtrs(aPtr, &b);
  print(a,b);




  /* ===== Misc. Lessons ===== */

  // print(a, b);

  // dereferencing dangle will potentially corrupt your program :'(
  int *dangle = danglingPointers();

  // this is OK
  int *notDangle = notDangleYay();
  *notDangle = 1 + 1;
  // use not dangle
  delete notDangle;
  *notDangle = 4 + 6; //Don't do this!!! It has been relaimed by the OS.
  notDangle = nullptr;

}

void print(int a, int b) {
  std::cout << "A: " << a << std::endl;
  std::cout << "B: " << b << std::endl << std::endl;
}

void swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

// will not work for same reason as above
void swapWithPtrs2(int *aPtr, int *bPtr) {
  int *temp = aPtr;
  aPtr = bPtr;
  bPtr = temp;
}

void swapWithPtrs(int *aPtr, int *bPtr) {
  int temp = *aPtr;
  *aPtr = *bPtr;
  *bPtr = temp;
}

// VERY BAD!!! C++ will warn you if you let it.
int* danglingPointers() {
  int aReallyBad = 54;
  return &aReallyBad;
}

// OK, new
int* notDangleYay() {
  int *aKindaOK = new int;
  return aKindaOK;
}
