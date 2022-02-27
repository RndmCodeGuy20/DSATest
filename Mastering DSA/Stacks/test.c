#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};

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

int main(int argc, char const *argv[])
{
    struct stack *s;
    s->top = -1;
    s->size = 5;
    s->arr = (int *)malloc(s->size * sizeof(int));

    // Pushing element manually

    s->arr[0] = 1;
    s->arr[1] = 1;
    s->arr[2] = 1;
    s->top++;

    // Checking the stack is empty or not
    if (isEmpty(s))
    {
        printf("Stack is empty.");
    }
    else
    {
        printf("Stack is not empty.");
    }

    printf("%d %d %d", s->arr[0], s->arr[1], s->arr[2]);

    return 0;
}