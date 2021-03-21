#include "LinkedList.h"
#include "Node.h"
#include <cstddef>

LinkedList::LinkedList() {
	LinkedList::length = 0;
	LinkedList::head = head;
}

int LinkedList::push(int data) {
	// Push
	
	length++;

	return length;
}

int LinkedList::getLength() {
	return length;
}

Node LinkedList::getHead() {
	return *head;
}

Node* LinkedList::getHeadPointer() {
	return head;
}