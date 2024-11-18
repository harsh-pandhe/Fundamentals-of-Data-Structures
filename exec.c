#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *prev;
    struct Node *next;
};

struct Node *newNode(int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
};

void forwardTraversal(struct Node *head)
{
    struct Node *curr = head;
    while (curr != NULL)
    {
        printf("%d ", curr->data);
        curr = curr->next;
    }
    printf("\n");
}

void backwardTraversal(struct Node *tail)
{
    struct Node *curr = tail;
    while (curr != NULL)
    {
        printf("%d ", curr->data);
        curr = curr->prev;
    }
    printf("\n");
}

int main()
{
    struct Node *head = newNode(1);
    struct Node *second = newNode(2);
    struct Node *third = newNode(3);

    head->next = second;
    second->prev = head;
    second->next = third;
    third->prev = second;

    forwardTraversal(head);
    backwardTraversal(third);

    return 0;
}