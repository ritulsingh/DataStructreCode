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
int peek(struct stack *ptr, int i){
    int arrIndex = ptr->top - i + 1;
    if (arrIndex < 0)
    {
        printf("Not a valid postion for the stack\n");
        return -1;
    }
    else
    {
        return ptr->arr[arrIndex];
    }    
}
// int stackTop(struct stack *ptr){
//     return ptr->arr[ptr->top];
// }
int main()
{
    struct stack *s = (struct stack *)malloc(sizeof(struct stack));
    s->size = 50;
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

    for (int j = 1; j <= s->top + 1; j++)
    {
        printf("The value at index %d is %d\n", j, peek(s,j));
    }

    // printf("The top most value of this stack is %d\n", stackTop(s));    
    // printf("The top most value of this stack is %d\n", stack(s));    


    return 0;
}