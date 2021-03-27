from LinkedList import *

def main():
    myLinkedList = LinkedList()
    myLinkedList.pop()
    myLinkedList.push(2021)
    print(f"2021 in list: {2021 in myLinkedList}")
    myLinkedList.pop()
    print(f"2021 in list: {2021 in myLinkedList}")
    print(f"2024 in list: {2024 in myLinkedList}")
    

    myLinkedList.push(2022)
    myLinkedList.push(2023)
    myLinkedList.push(2024)

    
    print(f"2024 in list: {2024 in myLinkedList}")

    print(myLinkedList)

if __name__ == "__main__":
    main()