#include <cstddef>
#include "Node.h"

Node::Node(int d, Node* n) {
	data = d;
	next = n;
}

int Node::getData() {
	return data;
}

void Node::setData(int d) {
	data = d;
}

Node* Node::getNext() {
	return next;
}

void Node::setNext(Node* n) {
	next = n;
}