#include <iostream>

int main() {
  int size = 0;
  for (;;) {
    double tempIn = 0;
    std::cin >> tempIn;
    // Erases any String
    std::cin.clear();
    std::cin.ignore(1000, '\n');
    // Check if in is zero
    if (tempIn == 0) {
      std::cout << "Stop Entering Text >:(" << std::endl;
      continue;
    }
    if (tempIn != (int)tempIn) {
      std::cout << "You entered a decimal meanie" << std::endl;
      continue;
    }
    size = tempIn;
    std::cout << "Awesome! Valid input is: " << size << std::endl;
		break;
  }
}
