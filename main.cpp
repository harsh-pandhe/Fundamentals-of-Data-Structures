#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
    Node *prev;
    Node(int data)
    {
        this->data = data;
        this->next = nullptr;
        this->prev = nullptr;
    }
};

void forwardTraveral(Node *head)
{
    Node *curr = head;
    while (curr != nullptr)
    {
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << endl;
}

void backTraversal(Node *tail)
{
    Node *curr = tail;
    while (curr != nullptr)
    {
        cout << curr->data << " ";
        curr = curr->prev;
    }
    cout << endl;
}

int main()
{
    Node *head = nullptr;
    Node *second = nullptr;
    Node *third = nullptr;

    head = new Node(1);
    second = new Node(2);
    third = new Node(3);

    head->next = second;
    second->next = third;
    second->prev = head;
    third->prev = second;

    forwardTraveral(head);
    backTraversal(third);
}