#include "linkedlist.h"

// linked list for session 2

int main() {
	LinkedList ll;
	ll.add(5);
	ll.add(6);
	ll.add(7);
	ll.print();
	std::cout << ll.get(0) << " "
		<< ll.get(1) << " " << ll.get(2);
}
Node::Node(int input){
	data=input;
}

void LinkedList::add(int input) {
	if (!first) {
		first=new Node(input);
		return;
	}

	Node *curr=first;
	while(curr->next){
		curr=curr->next;
	}
	curr->next=new Node(input);
}

int LinkedList::get(std::size_t i) {
	if (!first) {
		throw std::out_of_range("invalid index");
	}
	Node *curr = first;
	std::size_t count = 0;
	while(count < i && curr->next) {
		++count;
		curr=curr->next;
	}
	if (count != i) {
		throw std::out_of_range("invalid index");
	}
	return curr->data;
}

void LinkedList::print() {
	Node *curr = first;

	std::cout << "LinkedList: ";
	while(curr) {
		std::cout << curr->data << "->";
		curr = curr->next;
	}

	std::cout << "NULL" << std::endl;
}
