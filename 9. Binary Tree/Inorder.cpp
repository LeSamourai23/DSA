#include <iostream>
#include <conio.h>
#include <stdio.h>

struct Node
{
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

void PrintTree(Node *root)
{
    if (root == nullptr)
    {
        return;
    }

    PrintTree(root->left);
    std::cout << root->data << " ";
    PrintTree(root->right);
}

int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    PrintTree(root);

    return 0;
}
