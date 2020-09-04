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
// case 1 Insert at first node
struct Node * doublyInsertionFirst(struct Node *head, int data){
    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->prev = NULL;
    ptr->next = head;
    return ptr;
} 
// Case 2 Insertion in last node
struct Node *doublyInsertMid(struct Node *head, int data)
{
    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    struct  Node *p = head;
    while (p!=NULL)
    {
        p = p->next;
        p++;
    }

    p->next = ptr;
    ptr->next = NULL;    
    return ptr;
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
    head->data = 12;
    head->next = second;

    second->prev = head;
    second->data = 25;
    second->next = third;

    third->prev = second;
    third->data = 30;
    third->next = forth;

    forth->prev = third;
    forth->data = 56;
    forth->next = NULL;

    printf("Doubly Linked Before Insertion ");
    doublyLinkedTraversal(head);
    // head = doublyInsertionFirst(head,28);
    head = doublyInsertMid(head,128);
    printf("\nDoubly Linked After Insertion ");
    doublyLinkedTraversal(head);

   

    return 0;
}