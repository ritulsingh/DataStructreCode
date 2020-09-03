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

// Case 1 Deletion at beginning in a linked list
struct Node *linkedFirstDelete(struct Node *head)
{
    struct Node *ptr = head;
    head = head->next;
    free(ptr);
    return head;
}

// Case 2 Deletion in between in a linked list
struct Node *linkedDeletionMid(struct Node *head, int index)
{
    struct Node *p = head;
    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    struct Node *q = p->next;
    p->next = q->next;
    free(q);
    return head;
}

// Case 3 Deletion at the End in a linked list
struct Node *linkedDeletionEnd(struct Node *head)
{
    struct Node *p = head;
    struct Node *q = head->next;
    while (q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    p->next = NULL;
    free(q);
    return head;
}

// Case 4 deletion after a Node in a linked list
struct Node *linkedDeletionAfterNode(struct Node *head, int value)
{
    struct Node *p = head;
    struct Node *q = p->next;
    while (q->data != value && q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    if (q->data == value)
    {
        p->next = q->next;
        free(q);
    }
    return head;
}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *forth;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    forth = (struct Node *)malloc(sizeof(struct Node));

    // Link first and second nodes
    head->data = 7;
    head->next = second;

    // Link second and third nodes
    second->data = 17;
    second->next = third;

    // Link third and forth nodes
    third->data = 26;
    third->next = forth;

    // Terminate the last at the forth nodes
    forth->data = 37;
    forth->next = NULL;

    printf("Linked list before Deletion\n");
    linkedTraversal(head);

    // head = linkedFirstDelete(head);
    // head = linkedDeletionMid(head, 2);
    // head = linkedDeletionEnd(head);
    head = linkedDeletionAfterNode(head, 78);

    printf("\nLinked list after Deletion\n");
    linkedTraversal(head);
    return 0;
}