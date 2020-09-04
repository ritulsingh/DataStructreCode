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

// Case 1 Insertion at beginning
struct Node *circularInsertFirst(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node *p = head->next;
    while (p->next != head)
    {
        p = p->next;
    }
    // At this point p points to the the last node of this circular linked list
    p->next = ptr;
    ptr->next = head;
    head = ptr;
    return head;
}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    // Link first and second nodes
    head->data = 15;
    head->next = second;

    // Link second and third nodes
    second->data = 20;
    second->next = third;

    third->data = 25;
    third->next = head;

    printf("Before Insertion in Circular Linked List\n");
    circularTraversal(head);

    printf("\nAfter Insertion in Circular Linked List\n");
    head = circularInsertFirst(head,80);
    head = circularInsertFirst(head,65);
    head = circularInsertFirst(head,56);
    circularTraversal(head);
    return 0;
}