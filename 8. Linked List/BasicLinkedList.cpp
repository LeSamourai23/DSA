#include <iostream>

struct Node
{
    int Value;
    Node *Next;
};

typedef Node *nodePtr;

void PrintList(nodePtr n)
{
    while (n != NULL)
    {
        std::cout << n->Value << std::endl;
        n = n->Next;
    }
}

void InsertNodeAtFront(nodePtr *head, int value)
{
    nodePtr newNode = new Node();

    newNode->Value = value;
    newNode->Next = *head;

    *head = newNode;
}

void InsertNodeAtTheLast(nodePtr *head, int value)
{
    nodePtr newNode = new Node();

    newNode->Value = value;
    newNode->Next = NULL;

    if (*head == NULL)
    {
        *head = newNode;
        return;
    }

    Node *last = *head;

    while (last->Next != NULL)
    {
        last = last->Next;
    }

    last->Next = newNode;
}

int main()
{
    nodePtr head = new Node();
    nodePtr second = new Node();
    nodePtr third = new Node();

    head->Value = 1;
    second->Value = 2;
    third->Value = 3;

    head->Next = second;
    second->Next = third;
    third->Next = NULL;

    InsertNodeAtFront(&head, -1);
    InsertNodeAtTheLast(&third, 4);

    PrintList(head);

    return 0;
}