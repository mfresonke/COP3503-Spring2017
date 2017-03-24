#include <iostream>
#include <fstream>

const std::string FILENAME_INPUT = "pa3-test.txt";

int main() {
	std::ifstream file(FILENAME_INPUT);

	int count = 0;
	while( file.good() ) {
		std::string token;
		file >> token;
		std::cout << "Token " << count++ << ": " << token << std::endl;
	}

	file.close();
	return 0;
}
