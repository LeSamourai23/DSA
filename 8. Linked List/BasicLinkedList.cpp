#include <iostream>

struct Node
{
    int Value;
    Node *Link;
};

typedef Node *nodePtr;

void PrintList(nodePtr n)
{
    while (n != NULL)
    {
        std::cout << n->Value << std::endl;
        n = n->Link;
    }
}

void InsertNodeAtFront(Node**head, int value)
{
    nodePtr newNode = new Node();

    newNode->Value = value;
    newNode->Link = *head;

    *head= newNode;
}

void InsertNodeAtTheLast(Node**head, int value)
{
    nodePtr newNode = new Node();

    newNode->Value = value;
    newNode->Link = NULL;

    if(*head == NULL)
    {
        *head = newNode;
        return;
    }

    Node* last = *head;

    while(last->Link!=NULL)
    {
        last = last->Link;
    }

    last->Link = newNode;
}

int main()
{
    nodePtr head = new Node();
    nodePtr second = new Node();
    nodePtr third = new Node();

    head->Value = 1;
    second->Value = 2;
    third->Value = 3;

    head->Link = second;
    second->Link = third;
    third->Link = NULL;

    InsertNodeAtFront(&head, -1);
    InsertNodeAtTheLast(&third, 4);

    PrintList(head);

    return 0;
}