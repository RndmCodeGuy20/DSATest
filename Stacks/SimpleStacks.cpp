/**
 * @file SimpleStacks.cpp
 * @author Shantanu Mane | @RndmCodeGuy20 (shantanu.mane.200@outlook.com)
 * @brief
 * @version 0.1
 * @date 05-06-2022
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <iostream>
using namespace std;

struct Stack
{
    int *S;
    int size;
    int top;
};

void createStack(struct Stack *stack, int size, int values[])
{
    stack->size = size;
    stack->S = (int *)malloc(stack->size * sizeof(int));
    stack->top = stack->size - 1;

    for (int i = 0; i < stack->size; i++)
    {
        stack->S[i] = values[i];
    }
}

void dispStack(struct Stack stack)
{
    printf("Stack : TOS ->  ");
    for (int i = stack.top; i >= 0; i--)
    {
        printf("%d\t", stack.S[i]);
    }
}

int sumStk(struct Stack stack)
{
    int sum = 0;

    for (int i = stack.top; i >= 0; i--)
    {
        sum += stack.S[i];
    }

    return sum;
}

int main()
{
    struct Stack stackOne;
    int stackOneVal[] = {3, 2, 1, 4, 5};
    // top of the stack for this :   👆

    struct Stack stackTwo;
    int stackTwoVal[] = {5, 1, 4};

    struct Stack stackThree;
    int stackThreeVal[] = {5, 1, 3};

    createStack(&stackOne, 5, stackOneVal);
    createStack(&stackTwo, 3, stackTwoVal);
    createStack(&stackThree, 3, stackThreeVal);

    int sumStacks[3] = {sumStk(stackOne), sumStk(stackTwo), sumStk(stackThree)};

    while (true)
    {
        cout << "\n"
             << endl;

        dispStack(stackOne);
        cout << endl;
        dispStack(stackTwo);
        cout << endl;
        dispStack(stackThree);

        if (sumStacks[0] == sumStacks[1] && sumStacks[1] == sumStacks[2])
        {
            break;
        }

        if (sumStacks[0] >= sumStacks[1] && sumStacks[0] >= sumStacks[2])
        {
            sumStacks[0] -= stackOne.S[stackOne.top--];
        }
        else if (sumStacks[1] >= sumStacks[0] && sumStacks[1] >= sumStacks[2])
        {
            sumStacks[1] -= stackTwo.S[stackTwo.top--];
        }
        else if (sumStacks[2] >= sumStacks[0] && sumStacks[2] >= sumStacks[1])
        {
            sumStacks[2] -= stackThree.S[stackThree.top--];
        }
    }

    printf("\n%d", sumStacks[0]);

    return 0;
}