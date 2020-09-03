#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node * next;
};
void linkedTraversal(struct Node *ptr){
    while (ptr != NULL)
    {
        printf("%d " , ptr->data);
        ptr = ptr->next;
    }
}
int main(){
    struct Node * head;
    struct Node * second;
    struct Node * third;
    struct Node * forth;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    forth = (struct Node *)malloc(sizeof(struct Node));

    // Link first and second nodes
    head->data = 7;
    head->next = second;

    // Link second and third nodes
    second->data = 66;
    second->next = third;

    // Link third and forth nodes
    third->data = 56;
    third->next = forth;

    // Terminate the last at the forth nodes
    forth->data = 156;
    forth->next = NULL;

    linkedTraversal(head);
    return 0;
}