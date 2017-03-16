#include "linkedlist.h"

void LinkedList::print() {
	// Create temp ptr that will be used
	//  for iterating
	Node *curr = first;
	std::cout << "LinkedList: ";
	// loop while curr != null
	while (curr) {
		std::cout << curr->data << "->";
		curr = curr->next;
	}
	std::cout << "NULL" << std::endl;
}

void LinkedList::add(int input) {
	Node *curr = first;
	Node *end = nullptr;
	// what is curr...always null
	// we use last to find the actual end node
	while(curr) {
		end = curr;
		curr = curr->next;
	}
	// no matter what, we're adding a new
	// node.
	// it's just a matter of where we put it.
	Node *newNode = new Node();
	newNode->data = input;
	// if our list is not empty...
	if (end) {
		// create a new node and add it to end
		end->next = newNode;
	} else {
		// if our list is empty.
		// our new node is the start
		first = newNode;
	}
}

void LinkedList::remove(std::size_t i) {
}

void LinkedList::insert(std::size_t i, int input) {

}

int LinkedList::get(std::size_t i) {
	Node *curr = first;
	std::size_t count = 0;
	// move through our linked list,
	// counting each time as we do it.
	while(curr && count != i) {
		curr = curr->next;
		++count;
	}

	// if curr is null OR count is not
	//  equal to i.
	if (!curr || count != i) {
		throw std::out_of_range(
			"index out of range"
		);
	}
	// If we get here, then curr IS index i.
	// therefore, we can return curr's data.
	return curr->data;
}

std::size_t LinkedList::size() {
	return 0; //TODO implement
}

int main() {
	LinkedList ll;
	ll.print();
	ll.add(2);
	ll.print();
	ll.add(5);
	ll.add(8);
	ll.add(4);
	ll.print();
	std::cout << "Element at 0"
}
