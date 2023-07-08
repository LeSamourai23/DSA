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

void Reverse(Node**head)
{
    nodePtr current = *head;
    nodePtr prev = NULL;
    nodePtr next = NULL;

    while(current != NULL)
    {
        next= current->Next;
        current->Next = prev;

        prev= current;
        current= next;
    }
    *head = prev;
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

    Reverse(&head);

    PrintList(head);

    return 0;
}