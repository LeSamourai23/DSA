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
        std::cout << n->Value << " ";
        n = n->Next;
    }
}

int LengthOfList(nodePtr n)
{
    int count = 0;

    while (n != NULL)
    {
        count++;
        n = n->Next;
    }

    return count;
}

nodePtr ReverseKNodes(nodePtr head, int k)
{
    if (head == NULL || head->Next == NULL)
    {
        return head;
    }

    nodePtr dummy = new Node();
    dummy->Next = head;

    nodePtr prev = dummy;
    nodePtr next;
    nodePtr current;

    int length = LengthOfList(head);

    while (length >= k)
    {
        current = prev->Next;
        next = current->Next;

        for (int i = 1; i < k; i++)
        {
            current->Next = next->Next;
            next->Next = prev->Next;
            prev->Next = next;
            next = current->Next;
        }
        prev = current;
        length -= k;
    }

    return dummy->Next;
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

    InsertNodeAtTheLast(&head, 4);
    InsertNodeAtTheLast(&head, 5);
    InsertNodeAtTheLast(&head, 6);
    InsertNodeAtTheLast(&head, 7);
    InsertNodeAtTheLast(&head, 8);

    nodePtr newHead = ReverseKNodes(head, 3);

    PrintList(newHead);

    return 0;
}
