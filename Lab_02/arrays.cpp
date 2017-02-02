#include <iostream>
#include <string>

const int MAX_SIZE = 15;

int main() {
	// Static 1D Arrays
	std::cout << "Please enter number of inputs: ";
	int input = 0;
	std::cin >> input;
	// do checks on input
	//int arr[input]; //ILLEGAL variable <input> varies during runtime
	int arr[MAX_SIZE] = {}; //LEGAL. MAX_SIZE is constant

	/* Static 2D Arrays */
	int ms[MAX_SIZE][MAX_SIZE] = {}; // LEGAL MAX_SIZE is constant

	/* Dynamic 1D Arrays */
	int *dArr = new int[input];
	// Must initalize to zero (not guaranteed).
	for (int i=0; i!=input; ++i) {
		dArr[i] = 0;
	}
	// do stuff with array
	dArr[0] = 2;
	// delete array now that we are done with it
	delete [] dArr;

	/* Dynamic 2D Arrays */

	int **d2DArr = new int*[input];
	for(int i=0; i!=input; ++i) {
		d2DArr[i] = new int[input];
		// Zero Out Numbers
		for (int j=0; j!=input; ++j) {
			d2DArr[i][j] = 0;
		}
	}
	// *whew* we can use it now!
	d2DArr[0][1] = 4;

	//... oh crap! We have to delete it 👎
	for(int i=0; i!=input; ++i) {
		delete [] d2DArr[i];
	}
	delete [] d2DArr;

	// Vectors
	std::vector<int> myAwesomeVect;
	myAwesomeVect.push_back(2);
	std::cout << "The first ele is: " << myAwesomeVect[0] << std::endl;

	// 2D Vectors
	std::vector<std::vector<int>> probablyNotWorthIt;
}
