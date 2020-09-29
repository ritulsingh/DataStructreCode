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
    int num, pos;
    printf("\nEnter the number you insert in list\n");
    scanf("%d",&num);
    printf("Enter the postion\n");
    scanf("%d",&pos);

    head = linkedInsertMid(head, num, pos);


    printf("After Insertion in Linked List\n");
    linkedTraversal(head);
    return 0;
}