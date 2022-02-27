#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

struct stack
{
    int top;
    int size;
    int *s;
};

int isEmpty(struct stack *st)
{
    if (st->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{

    struct stack *stack;
    stack->top = -1;
    stack->size = 5;
    stack->s = (int *)malloc(stack->size * sizeof(int));

    stack->top++;
    stack->s[stack->top] = 130;
    stack->s[1] = 3874;

    printf("%d %d", stack->s[0], stack->s[1]);

    if (isEmpty(stack))
    {
        printf("empty");
    }
    else
    {
        printf("not empty");
    }

    return 0;
}