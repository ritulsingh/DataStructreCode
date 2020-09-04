#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
};
// Traversal print of doubly linked list
void doublyLinkedTraversal(struct Node * head)
{
    struct Node *p = head;
    printf("\n");
    do
    {
        printf("%d ", p->data);
        p = p->next;
    } while (p != NULL);
}
// traversal in reverse order print of doubly linked list
void doublyReverse(struct Node * head)
{
    struct Node *p = head;
    while (p->next != NULL)
    {
        p = p->next;
    }
    printf("\n");
    do
    {
        printf("%d ", p->data);
        p = p->prev;
    } while (p != NULL);
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

    head->prev = NULL;
    head->data = 7;
    head->next = second;

    second->prev = head;
    second->data = 12;
    second->next = third;

    third->prev = second;
    third->data = 16;
    third->next = forth;

    forth->prev = third;
    forth->data = 20;
    forth->next = NULL;

    printf("Doubly linked traversal ");
    doublyLinkedTraversal(head);

    printf("\nDoubly linked reverse traversal ");
    doublyReverse(head);

    return 0;
}