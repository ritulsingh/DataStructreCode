#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int size;
    int top;
    int *arr;
};
// Checking the stack is empty or not
int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
// Checking the stack is full or not
int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
// pushing the element in the stack
void push(struct stack *ptr, int val)
{
    if (isFull(ptr))
    {
        printf("Stack Overflow! Cannot push %d to the stack\n", val);
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}
// pop the element in the stack
int pop(struct stack *ptr)
{
    if (isEmpty(ptr))
    {
        printf("Stack Underflow! Cannot pop from the stack\n");
        return 0;
    }
    else
    {
        int val;
        val = ptr->arr[ptr->top];
        ptr->top = ptr->top-1;
        return val;
    }
}
int main()
{
    struct stack *s = (struct stack *)malloc(sizeof(struct stack));
    s->size = 5;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));

    printf("Before pussing : full  %d \n", isFull(s));
    printf("Before pussing : empty %d \n", isEmpty(s));
    push(s, 18);
    push(s, 10);
    push(s, 23);
    push(s, 29);
    push(s, 28); // --> Pushed 5 values
    push(s, 12); // Stack overflow since the size of the stack is 5
    printf("After pussing : full  %d \n", isFull(s));
    printf("After pussing : empty %d \n", isEmpty(s));

    printf("Popped %d from the stack\n", pop(s)); // --> Last in First out!
    printf("Popped %d from the stack\n", pop(s)); // --> Last in First out!
    printf("Popped %d from the stack\n", pop(s)); // --> Last in First out!
    return 0;
}