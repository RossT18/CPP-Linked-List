#pragma once
#include <cstddef>

class Node
{
	private:
		int data;
		Node* next;
	public:
		Node(int d, Node* n = NULL);
		int getData();
		bool hasNext();
		Node* getNext();
		void setData(int d);
		void setNext(Node* n);
};
