#include <iostream>

class Animal {
public:
	virtual void speak() = 0;
	virtual int getNumLegs() = 0;
	virtual bool isAlive() {
		return true;
	}
};

class Person : public Animal {
public:
	void speak();
	int getNumLegs();
	// bool isAlive() {
	// 	return false;
	// }
	// void cryAloneInCorner() {
	// 	std::cout << "😭 #depression 😭" << std::endl;
	// }
};

int Person::getNumLegs() {
 return 2;
}

void Person::speak() {
	std::cout << "yo dawg" << std::endl;
}

class Hamster : public Animal {
	void speak() {
		std::cout << "squek" << std::endl;
	}
	int getNumLegs() {
		return 4;
	}
};

int main() {
	Animal *animalArr[2] = {new Person(), new Hamster(), new Person()};

	for (int i=0; i!=2; ++i ) {
		animalArr[i]->speak();
	}


	Animal *p = new Person();

	Person p2;
	Person *p3 = new Person();
	Animal a = (Animal)p2;

	if (p->isAlive()) {
		std::cout << "ahh ahh ahh ah staying alive" << std::endl;
	} else {
		std::cout << "🔪😢" << std::endl;
	}

	//p->cryAloneInCorner();

}
