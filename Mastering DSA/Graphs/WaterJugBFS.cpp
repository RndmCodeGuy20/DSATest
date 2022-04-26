#include <iostream>
#include "Queue.h"
using namespace std;

struct JugState *Empty4(struct JugState *jugs)
{
    jugs->jug4 = 0;

    return jugs;
}

struct JugState *Empty3(struct JugState *jugs)
{
    jugs->jug3 = 0;

    return jugs;
}

struct JugState *Full4(struct JugState *jugs)
{
    jugs->jug4 = 4;

    return jugs;
}

struct JugState *Full3(struct JugState *jugs)
{
    jugs->jug3 = 3;

    return jugs;
}

struct JugState *From3to4(struct JugState *jugs)
{
    if (jugs->jug3 == 0)
    {
        return jugs;
    }

    while (jugs->jug3 != 0 && jugs->jug4 != 4)
    {
        jugs->jug3--;
        jugs->jug4++;
    }

    return jugs;
}

struct JugState *From4to3(struct JugState *jugs)
{
    if (jugs->jug4 == 0)
    {
        return jugs;
    }

    while (jugs->jug4 != 0 && jugs->jug3 != 3)
    {
        jugs->jug3++;
        jugs->jug4--;
    }

    return jugs;
}

int checkGoalState(struct JugState *jugs)
{
    if (jugs->jug4 == 2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

struct JugState randValUpdate(struct JugState jugs)
{
    jugs.jug3 = 3;
    jugs.jug4 = 4;

    return jugs;
}

int main()
{
    struct JugState *InitState = (struct JugState *)malloc(sizeof(struct JugState));

    InitState->jug3 = 0;
    InitState->jug4 = 0;
    InitState->next = NULL;

    // enqueue(0, 0); init
    // enqueue(0, 3); fill3
    // enqueue(3, 0); 3->4
    // enqueue(3, 3); fill3
    // enqueue(4, 2); 3->4
    // enqueue(0, 2); empty4
    // enqueue(2, 0); 3->4

    struct JugState *tempState;
    struct JugState *intermittentState = (struct JugState *)malloc(sizeof(struct JugState));

    // tempState = Full3(InitState);
    // enqueue(tempState);

    // tempState = From3to4(InitState);
    // enqueue(tempState);

    // tempState = Full3(InitState);
    // enqueue(tempState);

    // tempState = From3to4(InitState);
    // enqueue(tempState);

    // tempState = Empty4(InitState);
    // enqueue(tempState);

    // tempState = From3to4(InitState);
    // enqueue(tempState);

    enqueue(tempState);

    while (!isEmpty())
    {
        tempState = dequeue();

        intermittentState->jug4 = tempState->jug4;
        intermittentState->jug3 = tempState->jug3;

        // printf("Water in jugs : %d and %d\n", tempState->jug4, tempState->jug3);

        printf("Jug State : [%d, %d]\n", tempState->jug4, tempState->jug3);

        tempState = Full3(intermittentState);
        enqueue(tempState);

        tempState = Full4(intermittentState);
        enqueue(tempState);

        tempState = From3to4(intermittentState);
        enqueue(tempState);

        tempState = From4to3(intermittentState);
        enqueue(tempState);

        tempState = Empty4(intermittentState);
        enqueue(tempState);

        tempState = Empty3(intermittentState);
        enqueue(tempState);
    }

    printf("Goal state reached? %d", checkGoalState(tempState));

    return 0;
}