// Linked-List.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <cstddef>
#include "Node.h"
#include "LinkedList.h"

using namespace std;

int pushTest(LinkedList* ll) {
    ll->push(2021);
    ll->push(2022);
    ll->push(2023);
    ll->push(2024);

    return ll->getLength();
}

void nodeTests() {
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
}

int main()
{
    LinkedList* myLinkedList = new LinkedList();

    int length = pushTest(myLinkedList);
    myLinkedList->printList();

    myLinkedList->pop();

    myLinkedList->printList();

    cout << myLinkedList->contains(2021) << endl;
    cout << myLinkedList->contains(2022) << endl;
    cout << myLinkedList->contains(2023) << endl;
    cout << myLinkedList->contains(2024) << endl;

    return 0;
}