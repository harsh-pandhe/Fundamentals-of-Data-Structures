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

void print_list(Node *last)
{
    if (last == NULL)
        return;
    Node *head = last->next;
    while (true)
    {
        cout << head->data << " ";
        head = head->next;
        if (head == last->next)
            break;
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
    third->next = head;

    print_list(third);
}