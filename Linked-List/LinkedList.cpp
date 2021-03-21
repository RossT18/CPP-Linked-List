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

int LinkedList::pop() {
	if (head == NULL) {
		cout << "Cannot pop empty Linked List" << endl;
		return NULL;
	}
	else if (!head->hasNext()) {
		int data = head->getData();
		head = NULL;
		length--;
		return data;
	}

	Node* current = head;
	Node* previous = current;

	while (current->hasNext()) {
		previous = current;
		current = current->getNext();
	}

	previous->setNext(NULL);

	length--;

	return current->getData();
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