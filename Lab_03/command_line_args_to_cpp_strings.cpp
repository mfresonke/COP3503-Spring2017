#include <iostream>

int main(int argc, char** argv) {
	// convert gross c strings c++ strings
  std::string *cppArgs = new std::string[argc];
  for (int i=0; i != argc; ++i) {
    cppArgs[i] = std::string(argv[i]);
  }
	int temp = 4;

	// nice loop demonstrating their use
	for (int i=0; i!= argc; ++i) {
		std::cout << "arg[" << i << "] = " << cppArgs[i] << std::endl;
	}

	//utilize cppArgs /* */

	return 0;
}
