#include <iostream>

// github.com/mfresonke/COP3503-Spring2017
class Pizza {
private:
  int numToppings;
  int slicesLeft = 8;
public:

  Pizza() {
    numToppings = 1;
  }

  Pizza(int numToppings) {
    this->numToppings = numToppings;
  }

  bool eatSlice() {
    if (slicesLeft > 0) {
      --slicesLeft;
      return true;
    }
    return false;
  }

};

void heapVsStack() {
  int a = 3;
  Pizza p5;
  p5.eatSlice();
  Pizza *p6 = new Pizza(); // BAD! Memory Leak.
}

int main() {
  heapVsStack();

  // Stack Variables
  int a = 3;
  // by-value (do this 99% of time)
  Pizza p; // DO NOT put parenthesis with default
  Pizza p2(4); // DO use them for non-default

  p.eatSlice();
  p2.eatSlice();

  // On Heap
  // by pointer
  Pizza *p3 = new Pizza();
  Pizza *p4 = new Pizza(7);

  (*p3).eatSlice(); // intuition (don't actually do this)
  p3->eatSlice(); // how actually do

  // For every new we must delete...
  delete p3;
  p3 = nullptr;
  delete p4;
  p4 = nullptr;

  std::cout << "Yum!" << std::endl;
  return 0;
}
