#pragma once
#include "Node.h"
#include <cstddef>
#include <iostream>

class LinkedList
{
	private:
		Node* head;
		int length;
	public:
		LinkedList(Node* h = NULL);
		int push(int data);
		int pop();
		int getLength();
		void printList();
		Node getHead();
		Node* getHeadPointer();
		bool contains(int d);
		void insert(int d, int pos);
};

