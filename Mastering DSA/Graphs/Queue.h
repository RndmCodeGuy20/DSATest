#ifndef Queue_h
#define Queue_h
#include <stdlib.h>

struct JugState
{
    int jug4;
    int jug3;
    struct JugState *next;
} *front = NULL, *rear = NULL;

void enqueue(struct JugState *currentJug)
{
    struct JugState *temp;
    temp = (struct JugState *)malloc(sizeof(struct JugState));

    if (temp == NULL)
    {
        printf("Queue is full!\n");
    }
    else
    {
        temp->jug4 = currentJug->jug4;
        temp->jug3 = currentJug->jug3;

        if (front == NULL)
        {
            front = rear = temp;
        }
        else
        {
            rear->next = temp;
            rear = temp;
        }
    }
}

struct JugState *dequeue()
{
    struct JugState *returnState = NULL;
    // struct JugState *temp;

    if (front == NULL)
    {
        printf("Queue is Empty\n");
    }
    else
    {
        returnState = front;
        front = front->next;
        // temp = front;
        // free(temp);
    }

    return returnState;
}

int isEmpty()
{
    return front == NULL;
}

#endif