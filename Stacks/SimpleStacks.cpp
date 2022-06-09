/**
 * @file ThreeStackMaxSum.cpp
 * @author Shantanu Mane (manesg@rknec.edu) - E63
 * @author Sagar Pathak (pathakss@rknec.edu) - E60
 * @brief A C/C++ program to calculate the maximum sum of elements in three stacks.
 * @version 1.3.2
 * @date 01-06-2022
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <iostream>
using namespace std;

/**
 * @brief Create a struct to represent a stack.
 *
 */
struct Stack
{
    int *S;
    int size;
    int top;
};

/**
 * @brief Create a Stack object
 *
 * @param stack - A pointer to a Stack object
 * @param size - size of the stack
 * @param values - values to be pushed into the stack
 * @return Nothing is returned
 */
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

/**
 * @brief Function to display the stack.
 *
 * @param stack
 * @return Nothing is returned
 */
void dispStack(struct Stack stack)
{
    printf("Stack : TOS ->  ");
    for (int i = stack.top; i >= 0; i--)
    {
        printf("%d\t", stack.S[i]);
    }
}

/**
 * @brief Function to find the sum of elements in the stack.
 *
 * @param stack
 * @return int - sum of elements in the stack
 */
int sumStk(struct Stack stack)
{
    int sum = 0;

    for (int i = stack.top; i >= 0; i--)
    {
        sum += stack.S[i];
    }

    return sum;
}

/**
 * @brief Main function, which calls all the other functions.
 *
 * @return int
 */
int main()
{
    // Create three stacks - one for each of the three stacks.
    struct Stack stackOne;
    int stackOneVal[] = {3, 2, 1, 5, 4};
    // top of the stack for this :   👆

    struct Stack stackTwo;
    int stackTwoVal[] = {5, 1, 4};

    struct Stack stackThree;
    int stackThreeVal[] = {5, 1, 3};

    // Create the objects of the stack.
    createStack(&stackOne, 5, stackOneVal);
    createStack(&stackTwo, 3, stackTwoVal);
    createStack(&stackThree, 3, stackThreeVal);

    // sum of the elements in the stack is stored in this array.
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

        if (stackOne.top == -1 || stackTwo.top == -1 || stackThree.top == -1)
        {
            sumStacks[0] = sumStacks[1] = sumStacks[2] = -1;
            break;
        }

        if (sumStacks[0] == sumStacks[1] && sumStacks[1] == sumStacks[2])
        {
            break;
        }

        // Find the maximum sum stack of the three stacks, without sorting the sum array.
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

    if (sumStacks[0] != -1)
    {
        printf("\nMaximum sum of the three stacks is : %d", sumStacks[0]);
    }
    else
    {
        printf("\nMaximum sum is 0 for this case!");
    }

    return 0;
}