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
        if self._head == None:
            print("Linked List is empty. Cannot pop")
            return -1
        elif not self._head.hasNext():
            data = self._head.getData()
            self._head = None
            self._length -= 1
            return data
        
        current = self._head
        prev = self._head
        while current.hasNext():
            prev = current
            current = current.getNext()
        
        data = current.getData()
        prev.setNext(None)
        self._length -= 1
        return data

    def getHead(self) -> Node:
        return self._head

    def __contains__(self, item: int) -> bool:
        if self._head == None:
            return False

        current = self._head
        while current.hasNext():
            if current.getData() == item:
                return True
            current = current.getNext()
        if current.getData() == item:
            return True
        return False

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

    def insert(self, data: int, pos: int) -> bool:
        if pos > self._length:
            print("Cannot insert outside of linked list")
            return False
        elif self._head == None and pos == 0:
            self._head = Node(data)
            self._length += 1
            return True
        elif pos == 0:
            new_head = Node(data, self._head)
            self._head = new_head
            self._length += 1
            return True
        
        current = self._head
        current_pos = 0
        while current.hasNext() and current_pos < pos - 1:
            current = current.getNext()
            current_pos += 1

        old_next = current.getNext()
        current.setNext(Node(data, old_next))
        self._length += 1
        return True
            

    def __str__(self) -> str:
        return self.toString()

    def __repr__(self) -> str:
        return self.toString()

    def __len__(self) -> int:
        return self._length
