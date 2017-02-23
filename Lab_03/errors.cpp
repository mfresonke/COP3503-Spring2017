/*
"Classes" Of Errors:
  1. Runtime
    + Divide by zero
    + Derefencing a Null Pointer
  2. Compile-time
    + Syntax Error
  3. Logic
    + Off-by-one errors
    + Bugs
  4. Generated
    + Thrown Execptions
    + Non-zero return code
*/

/* Execptions:
  Some standard ones to use:
    -invalid_argument
    -out_of_range
    -exception
    -many more...
*/

#include <stdexcept>
#include <iostream>

void throwException() {
  throw std::invalid_argument("you did it bad.");
}

int main() {
  try {
    throwException();
  } catch (std::exception e) {
    // do error handling
  }
}
