#include "LinkedList.h"
#include "Node.h"
#include <cstddef>
#include <iostream>

using namespace std;

LinkedList::LinkedList(Node* h) {
	LinkedList::length = 0;
	LinkedList::head = h;
}

int LinkedList::push(int data) {
	
	Node* newNode = new Node(data);

	if (head == NULL) {
		head = newNode;
	}
	else {
		Node* current = head;

		while (current->hasNext()) {
			current = current->getNext();
		}

		current->setNext(newNode);
	}

	length++;

	return length;
}

void LinkedList::printList() {

	if (head == NULL) {
		cout << "Linked List is empty" << endl;
		return;
	}

	cout << "-- Linked List Content --" << endl;

	Node* current = head;
	int count = 0;
	while (current->hasNext()) {
		cout << "Item " << count + 1 << ": " << current->getData() << endl;
		current = current->getNext();
		count++;
	}
	cout << "Item " << count + 1 << ": " << current->getData() << endl;
	cout << "-- Length: " << length << " --" << endl;
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