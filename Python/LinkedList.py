class Node:
    def __init__(self, data: int, next: 'Node' = None):
        self._data = data
        self._next = next

    def getData(self) -> int:
        return self._data

    def hasNext(self) -> bool:
        return self._next != None

    def getNext(self) -> 'Node':
        return self._next

    def setData(self, d: int) -> None:
        self._data = d

    def setNext(self, n: 'Node') -> None:
        self._next = n

class LinkedList:
    def __init__(self, h: Node = None):
        self._head = h
        self._length = 0

    def push(self, data: int) -> int:
        if self._head == None:
            self._head = Node(data)
            self._length += 1
            return
        
        current = self._head
        while current.hasNext():
            current = current.getNext()

        current.setNext(Node(data))        
        self._length += 1

    def pop(self) -> int:
        pass

    def getHead(self) -> Node:
        return self._head

    def __contains__(self, item: int) -> bool:
        pass

    def toString(self) -> str:
        if self._length == 0:
            return "Linked List is empty"
        
        strRepresentation = ""

        current = self._head
        count = 0
        while current.hasNext():
            strRepresentation += f"Item {count + 1}: {current.getData()}\n"

            count += 1
            current = current.getNext()
        strRepresentation += f"Item {count + 1}: {current.getData()}\n"
        strRepresentation += f"Length: {self._length}"
        return strRepresentation


    def __str__(self) -> str:
        return self.toString()

    def __repr__(self) -> str:
        return self.toString()

    def __len__(self) -> int:
        return self._length
