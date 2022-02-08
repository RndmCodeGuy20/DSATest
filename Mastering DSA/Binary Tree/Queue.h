#ifndef Queue_h
#define Queue_h

struct node
{
    struct node *LC;
    int data;
    struct node *RC;
};

struct Queue
{
    int size;
    int front;
    int rear;
    node **Q;
};

void create(struct Queue *q, int size)
{
    q->size = size;
    q->front = q->rear = 0;
    q->Q = (node **)malloc(q->size * sizeof(node *));
}

void enqueue(struct Queue *q, node *x)
{
    if ((q->rear + 1) % q->size == q->front)
    {
        printf("💀💀!!Queue is FULL!!💀💀\n");
    }
    else
    {
        q->rear = (q->rear + 1) % q->size;
        q->Q[q->rear] = x;
    }
}

node *dequeue(struct Queue *q)
{
    node *x = NULL;

    if (q->front == q->rear)
    {
        printf("💀💀!!Queue is EMPTY!!💀💀\n");
    }
    else
    {
        q->front = (q->front + 1) % q->size;
        x = q->Q[q->front];
    }

    return x;
}

int isEmpty(struct Queue q)
{
    return q.front == q.rear;
}

#endif