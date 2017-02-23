#include <iostream>

class Person {
  int age;
  const std::string name;
public:
  Person(int age, std::string name) : name(name) {
    this->age = age;
  }
  std::string getName() const {
    return name;
  }
  int getAge() const {
    return age;
  }
  void haveABirthday() {
    if (age < 120) {
      ++age;
    }
  }
};

int main() {
  Person p(22, "Max");

  std::cout << "Age of person: " << p.getAge() << std::endl;

  const Person trev(21, "Trevor jskdfjdslkf");

  std::cout << "Name of person: " << trev.getName() << std::endl;
  std::cout << "Age of person: " << trev.getAge() << std::endl;
}
