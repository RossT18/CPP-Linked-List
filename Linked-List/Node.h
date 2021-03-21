#pragma once
#include <cstddef>

class Node
{
	private:
		int data;
		Node* next;
	public:
		Node(int d);
		int getData();
		Node* getNext();
		void setData(int d);
		void setNext(Node* d);
};
