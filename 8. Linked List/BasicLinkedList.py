class Node:
    def __init__(self, data):
        self.data = data
        self.next = None


class LinkedList:
    def __init__(self):
        self.head = None
        self.tail = None

    def push_back(self, value):
        new_node = Node(value)

        if self.head is None:
            self.head = new_node
            self.tail = new_node
        else:
            self.tail.next = new_node
            self.tail = new_node

    def pop_back(self):
        if self.is_empty():
            print("Error: Cannot pop from an empty list.")
            return

        if self.head == self.tail:
            self.head = None
            self.tail = None
        else:
            temp = self.head
            while temp.next != self.tail:
                temp = temp.next
            temp.next = None
            self.tail = temp

    def is_empty(self):
        return self.head is None

    def clear(self):
        self.head = None
        self.tail = None

    def print(self):
        temp = self.head
        while temp is not None:
            print(temp.data, end=" ")
            temp = temp.next
        print()


# Usage example
my_list = LinkedList()
my_list.push_back(1)
my_list.push_back(2)
my_list.push_back(3)

my_list.print()  # Output: 1 2 3

my_list.pop_back()
my_list.print()  # Output: 1 2

my_list.clear()
my_list.print()  # Output:
