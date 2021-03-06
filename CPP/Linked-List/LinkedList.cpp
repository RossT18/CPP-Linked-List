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

bool LinkedList::contains(int d) {
	if (head == NULL) {
		cout << "Linked List is empty" << endl;
		return false;
	}

	Node* current = head;
	while (current->hasNext()) {
		int currentD = current->getData();
		if (currentD == d) {
			return true;
		}
		current = current->getNext();
	}
	if (current->getData() == d) {
		return true;
	}

	return false;
}

void LinkedList::insert(int d, int pos) {
	// pos 0 should replace head
	if (head == NULL && pos > 0) {
		cout << "Cannot insert after head on empty linked list" << endl;
		return;
	}
	else if (pos > length) {
		cout << "Cannot insert outside of linked list" << endl;
		return;
	}
	else if (pos == 0) {
		Node* newNode = new Node(d, head);
		head = newNode;
		length++;
		return;
	}
	

	Node* current = head;
	int currentPos = 0;
	while (current->hasNext() && currentPos < pos) {
		// Change pointer of element before point of insertion
		if (currentPos == pos - 1) {
			Node* newNode = new Node(d, current->getNext());
			current->setNext(newNode);
		}

		current = current->getNext();
		currentPos++;
	}

	if (currentPos == pos - 1) {
		Node* newNode = new Node(d, current->getNext());
		current->setNext(newNode);
	}

	length++;
}