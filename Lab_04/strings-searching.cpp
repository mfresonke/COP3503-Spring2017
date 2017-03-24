#include <iostream>

int main() {
	// std::string ex = "lol-dfkjslkfjsldkfj-lol-kjhfksdhfkjdshf-lol";
	// std::string searchFor = "lol-";
	// // chop off strings
	std::string max = "max & trev are the best :D";
	std::cout << "index of are: " << max.find("aret") << std::endl;
	std::size_t i = max.find("aret");
	if (max.find("aret") == -1) {
		std::cout << "didn't find it :'(" << std::endl;
	}
	std::cout << "index of are: " << i << std::endl;


	return 0;
}
