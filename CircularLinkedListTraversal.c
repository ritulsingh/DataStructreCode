#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void circularTraversal(struct Node *head)
{
    printf("Elements of Circular Linked List: ");
    struct Node *p = head;
    while (p->next != head)
    {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("%d", p->data);
}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    head->data = 15;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 25;
    third->next = head;

    circularTraversal(head);

    return 0;
}