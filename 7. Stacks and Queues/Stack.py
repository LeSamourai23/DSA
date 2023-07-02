class Stack:

    def __init__(self):

        self.elements = []

    def isEmpty(self):

        return len(self.elements) == 0

    def push(self, num):

        self.elements.append(num)
        print(f"Element {num} pushed onto the stack.")

    def pop(self):

        if self.isEmpty():
            print("Stack is Empty")
            return -1

        popped_element = self.elements.pop()
        print(f"Element {popped_element} popped from the stack.")
        return popped_element

    def peek(self):

        if self.isEmpty():
            print("Stack is Empty")
            return -1

        return self.elements[-1]

    def display(self):

        if self.isEmpty():
            print("Stack is Empty")
            return -1
        
        for element in self.elements:
            print(element, end=" ")
        print()

stack = Stack()

stack.push(10)
stack.push(20)
stack.push(30)
stack.display()  

stack.pop()  
stack.display()  

print("Top element:", stack.peek())  

stack.push(40)
stack.display()  
