#include <iostream>
#include <stdexcept>
#include <string>

struct Node {
	Node *next = nullptr;
	int data;
	Node(int input);
};

class LinkedList {
	Node *first = nullptr;
	// Other common ll elements...
	// size_t size;
	// Node *end;
public:
	// add to the end of the list
	void add(int input); // O(n)
	// remove element at index i
	void remove(std::size_t i); // O(n)
	// add element at index i
	void insert(std::size_t i, int input); // O(n)
	// get element at index
	int get(std::size_t i); // O(n)
	// returns the size of the list
	std::size_t size(); // O(n)
	// Print func for debugging
	void print(); // O(n)
};
