#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = nullptr;
    }
};

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

    cout << head->data << " -> " << head->next->data << " -> " << head->next->next->data << endl;
}