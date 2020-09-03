#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};
void linkedTraversal(struct Node *ptr)
{
    printf("Elements : ");
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
}
// Case 1 Insertion at beginning
struct Node *linkedInsertFirst(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->next = head;
    ptr->data = data;
    return ptr;
}

// Case 2 Insertion in between
struct Node *linkedInsertMid(struct Node *head, int data, int index)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;
    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}
// Case 3 Insertion at the End
struct Node *linkedInsertEnd(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node *p = head;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    return head;
}
// Case 4 Insertion after a Node
struct Node *linkedInsertAfeterNode(struct Node *head, struct Node *prevNode, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->next = prevNode->next;
    prevNode->next = ptr;
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
    head->data = 7;
    head->next = second;

    // Link second and third nodes
    second->data = 66;
    second->next = third;

    // Terminate the last at the third nodes
    third->data = 56;
    third->next = NULL;

    printf("Before Insertion in Linked List\n");
    linkedTraversal(head);

    // head = linkedInsertFirst(head, 20);

    // head = linkedInsertMid(head, 20, 1);

    // head = linkedInsertEnd(head, 20);

    head = linkedInsertAfeterNode(head, second, 20);

    printf("\nAfter Insertion in Linked List\n");
    linkedTraversal(head);
    return 0;
}