#include <iostream>
#include <fstream>

const int MAX_VALS = 100;

bool isLowercase();
bool isLowercaseOrEqualSign(std::string str);

// potential abstraction for holding unique keywords/numbers/operators/etc.
// totally up to you if you'd like to implement
class Inventory {
	// some members to help... maybe some static arrays and a way to keep track
	//  of how many items have been added? ;)
public:
	void addIfNotExist(std::string item);
};

// example states. Make these however your brain thinks about them.
enum State {
	FOR_OR_EXP,
	FOR_1,
	FOR_2,
	FOR_3,
	FOR_BEGIN,
	EXP_OP,
	EXP_IDEN
	// ...more as an exercise for the reader
};

int main() {
	std::string input;
	std::cout << "Please enter a filename: ";
	std::cin >> input;
	// you will need to ask the user for the filename, as per pa3.pdf
//   	_    ____  ____    _____ _   _ ___ ____
//    / \  |  _ \|  _ \  |_   _| | | |_ _/ ___|
//   / _ \ | | | | | | |   | | | |_| || |\___ \
//  / ___ \| |_| | |_| |   | | |  _  || | ___) |
// /_/   \_\____/|____/    |_| |_| |_|___|____/
//
// __  __ _____ _____ _   _  ___  ____
// |  \/  | ____|_   _| | | |/ _ \|  _ \
// | |\/| |  _|   | | | |_| | | | | | | |
// | |  | | |___  | | |  _  | |_| | |_| |
// |_|  |_|_____| |_| |_| |_|\___/|____/
	std::ifstream file(input);

	if(!file.is_open()) {
      std::cout << "some intelligent error message" << std::endl;
			return 1;
  }

	// Optional. There are a lot of ways
	// to keep track of the identifiers.
	Inventory keywords;
	Inventory identifiers;
	Inventory constants;

	class Inventory {
		std::string vars[100];
		int numVars = 0;
	public:
		void add(std::string var) {
			for (int i=0; i!=100; ++i) {
				// make sure var isn't in the array
				// if it is, break.
			}
			// otherwise, add it to the array
		}
		void print(std::string type) {
			//
		}
	}

	// "prime" the state with it's inital value.
	State state = FOR_OR_EXP;
	for (;;) {
		// retrieve the next word and make sure that we still have valid input
		// e.g., we didn't hit the end of the file.
		std::string nextWord;
		file >> nextWord;
		if (!file.good()) {
			break;
		}
		// where the magic happens. We are able to switch on our "state" enum as if
		// it were an integer.
		// remember to "break" after every case or you will hate your life.
		switch (state) {
		case FOR_OR_EXP:
			if (nextWord == "FOR") {
				state = FOR_1;
				// this func is too simplistic. need to check for word on left,
				// word on right, and the presense of an equal sign.
			} else if (isLowercaseOrEqualSign(nextWord)) {
				state = EXP_OP;
			} else {
				// error condition
			}
			break;
		case FOR_1:
			if (nextWord.length() < 3) {
				//error code!
			}
			if (nextWord[0] != '(' ||
					nextWord[nextWord.length()-1] != ','
					) {
				// big trooubleeee
			}
			identifiers.addIfNotExist(
				nextWord.substr(1, nextWord.length()-2)
			);
			state = FOR_2;
			break;
		}
	}
	file.close();
	return 0;
}

// Everything you need is here: http://www.asciitable.com/

bool isLowercaseOrEqualSign(std::string str) {
}

bool isLowercase(std::string str) {
}
