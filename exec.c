#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *newNode(int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
};

void print_list(struct Node *last)
{
    if (last == NULL)
        return;
    struct Node *head = last->next;
    while (1)
    {
        printf("%d ", head->data);
        head = head->next;
        if (head == last->next)
            break;
    }
    printf("\n");
}

int main()
{
    struct Node *head = newNode(1);
    struct Node *second = newNode(2);
    struct Node *third = newNode(3);

    head->next = second;
    second->next = third;
    third->next = head;

    print_list(third);
    return 0;
}