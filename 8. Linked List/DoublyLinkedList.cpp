#include <iostream>

struct Node
{
    int Value;
    Node *Next;
    Node *Prev;
};

typedef Node *nodePtr;

void printListForward(nodePtr n)
{
    while (n != NULL)
    {
        std::cout << n->Value << " ";
        n = n->Next;
    }
}

void printListBackward(nodePtr n)
{
    while (n != NULL)
    {
        std::cout << n->Value << " ";
        n = n->Prev;
    }
}

void insertNode(nodePtr *tail, int value)
{
    nodePtr newNode = new Node();

    newNode->Value = value;
    newNode->Next = nullptr;
    newNode->Prev = *tail;
    (*tail)->Next = newNode;
    *tail= newNode; 
}

int main()
{
    nodePtr head;
    nodePtr tail;

    // Add First Node
    nodePtr node = new Node();
    node->Value = 4;
    node->Next = NULL;
    node->Prev = NULL;

    head = node;
    tail = node;

    // Add Second Node
    node = new Node();
    node->Value = 5;
    node->Next = NULL;
    node->Prev = tail;
    tail->Next = node;
    tail = node;

    // Add Thrid Node
    node = new Node();
    node->Value = 6;
    node->Next = NULL;
    node->Prev = tail;
    tail->Next = node;
    tail = node;

    insertNode(&tail, 7);

    printListBackward(tail);
    std::cout<<std::endl;
    printListForward(head);
}