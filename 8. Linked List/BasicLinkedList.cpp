#include <iostream>

struct Node {
    int data;
    Node* next;

    Node(int value) : data(value), next(nullptr) {}
};

class LinkedList {
private:
    Node* head;
    Node* tail;

public:
    LinkedList() : head(nullptr), tail(nullptr) {}

    ~LinkedList() {
        while (head != nullptr) {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
    }

    void pushBack(int value) {
        Node* newNode = new Node(value);

        if (head == nullptr) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    void popBack() {
        if (isEmpty()) {
            std::cout << "Error: Cannot pop from an empty list.\n";
            return;
        }

        if (head == tail) {
            delete tail;
            head = nullptr;
            tail = nullptr;
        } else {
            Node* temp = head;
            while (temp->next != tail) {
                temp = temp->next;
            }
            delete tail;
            tail = temp;
            tail->next = nullptr;
        }
    }

    bool isEmpty() const {
        return head == nullptr;
    }

    void print() const {
        Node* temp = head;
        while (temp != nullptr) {
            std::cout << temp->data << " ";
            temp = temp->next;
        }
        std::cout << "\n";
    }
};

int main() {
    LinkedList myList;
    myList.pushBack(1);
    myList.pushBack(2);
    myList.pushBack(3);

    myList.print();  // Output: 1 2 3

    myList.popBack();
    myList.print();  // Output: 1 2

    return 0;
}
