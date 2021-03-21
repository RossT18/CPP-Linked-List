// Linked-List.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <cstddef>
#include "Node.h"

using namespace std;

int main()
{
    Node myNode = Node(2021);
    Node myNode2 = Node(2020, &myNode);
    cout << myNode.getData() << endl;
    cout << myNode2.getData() << endl;

    cout << myNode.getNext() << endl;
    cout << myNode2.getNext() << endl;

    // 2 methods of getting the data through a pointer, -> syntax is nicer
    int nextNodeVal = myNode2.getNext()->getData();
    int nextNodeVal2 = (*myNode2.getNext()).getData();

    cout << nextNodeVal << endl;
    cout << nextNodeVal2 << endl;

    return 0;
}
