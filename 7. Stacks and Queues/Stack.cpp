#include <iostream>

const int MAX_SIZE = 100;

class Stack
{
private:
    int top;                // Index of top element
    int elements[MAX_SIZE]; // Stack (array to store the elements)

public:
    // Constructor
    Stack()
    {
        top = -1; // Stack initialised as an empty stack
    }

    bool isFull()
    {
        return top == MAX_SIZE - 1;
    }

    bool isEmpty()
    {
        return top == -1;
    }

    void push(int num)
    {
        if (isFull())
        {
            std::cout << "Stack is full!";
            return;
        }

        top++;
        elements[top] = num;
        std::cout << "Element " << num << " pushed onto the stack." << std::endl;
    }

    int pop()
    {
        if (isEmpty())
        {
            std::cout << "Stack is Empty!";
            return -1;
        }

        int poppedElement = elements[top];
        top--;

        std::cout << "Element " << poppedElement << " popped off the stack." << std::endl;

        return poppedElement;
    }

    int peek()
    {
        if (isEmpty())
        {
            std::cout << "Stack is Empty!";
            return -1;
        }

        return elements[top];
    }

    void display()
    {
        if (isEmpty())
        {
            std::cout << "Stack is Empty!";
            return;
        }

        for (int i = 0; i <= top; i++)
        {
            std::cout << elements[i] << " ";
        }

        std::cout << std::endl;
    }
};

int main()
{
    Stack stack;

    stack.push(10);
    stack.push(20);
    stack.push(30);
    stack.display(); // Stack elements: 10 20 30

    stack.pop();     // Element 30 popped from the stack.
    stack.display(); // Stack elements: 10 20

    std::cout << "Top element: " << stack.peek() << std::endl; // Top element: 20

    stack.push(40);
    stack.display(); // Stack elements: 10 20 40

    return 0;
}
