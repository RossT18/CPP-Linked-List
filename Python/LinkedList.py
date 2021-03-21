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
        pass

    def pop(self) -> int:
        pass

    def getHead(self) -> Node:
        return self._head

    def __contains__(self, item: int) -> bool:
        pass

    def toString(self) -> str:
        pass

    def __str__(self) -> str:
        return self.toString()

    def __repr__(self) -> str:
        return self.toString()

    def __len__(self) -> int:
        return self._length
