#include <iostream>
using namespace std;

struct Stack
{
    int size;
    int top;
    int *S;
};

void createStack(struct Stack *stack, int size)
{
    stack->size = size;
    stack->top = -1;
    stack->S = (int *)malloc(stack->size * sizeof(int));
}

void dispStack(struct Stack stack)
{
    printf("The current image of stack is : \n");

    for (int i = stack.top; i >= 0; i--)
    {
        printf("|  %d  |\n", stack.S[i]);
        printf("-------\n");
    }
}

void push(struct Stack *stack, int el)
{
    if (stack->top == stack->size - 1)
    {
        perror("Stack Overflow!!!");
    }
    else
    {
        stack->top++;
        stack->S[stack->top] = el;
    }
}

int pop(struct Stack *stack)
{
    int x = -1;

    if (stack->top == -1)
    {
        perror("Stack Underflow!!!");
    }
    else
    {
        x = stack->S[stack->top];
        stack->top--;
    }

    return x;
}

int peek(struct Stack stack, int index)
{
    int x = -1;

    if (stack.top - index + 1 < 0)
    {
        perror("Index Error!");
    }
    else
    {
        x = stack.S[stack.top - index + 1];
    }

    return x;
}

int main()
{
    struct Stack stack;

    createStack(&stack, 5);

    push(&stack, 4);
    push(&stack, 2);
    push(&stack, 1);
    push(&stack, 6);
    push(&stack, 8);

    dispStack(stack);

    printf("\nPopped element : %d", pop(&stack));

    printf("\nElement at 3 : %d", peek(stack, 3));

    return 0;
}