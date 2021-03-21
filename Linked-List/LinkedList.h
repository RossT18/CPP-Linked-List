#pragma once
#include "Node.h"
#include <cstddef>

class LinkedList
{
	private:
		Node* head;
		int length;
	public:
		LinkedList();
		int push(int data);
		int getLength();
		Node getHead();
		Node* getHeadPointer();
};

