#include <iostream>

int main(const int argc, const char **argv) {
  std::string *cppArgs = new std::string[argc];
  for (int i=0; i != argc; ++i) {
    cppArgs[i] = std::string(argv[i]);
  }

	//utilize cppArgs
}
