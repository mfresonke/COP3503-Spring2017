#include <iostream>

struct SomeThing {
  // public by default
private:
  // private stuff
};

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
  void setAge(int age) {
    //
  }
};

void printPeopleStuff(const Person * p) {
  std::cout << "Name of person: " << (*p).getName() << std::endl;
  // hehehehehehe
  // p->haveABirthday(); // :(
}

int main() {
  Person max(22, "Max");
  printPeopleStuff(&max);

  std::cout << "Age of person: " << max.getAge() << std::endl;

  const Person trev(21, "Trevor jskdfjdslkf");

  std::cout << "Name of person: " << trev.getName() << std::endl;
  std::cout << "Age of person: " << trev.getAge() << std::endl;
}
