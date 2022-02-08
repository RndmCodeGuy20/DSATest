#include <iostream>
#include "Queue.h"
using namespace std;

struct node *root = NULL;

void TreeCreate()
{
    struct node *ptr, *newNode;
    int x;
    struct Queue q;

    create(&q, 100);

    printf("Enter the value in root : ");
    scanf("%d", &x);

    root = (struct node *)malloc(sizeof(struct node));
    root->data = x;
    root->RC = root->LC = NULL;
    enqueue(&q, root);

    while (!isEmpty(q))
    {
        ptr = dequeue(&q);
        printf("Enter value of left child of %d : ", ptr->data);
        scanf("%d", &x);

        if (x != -1)
        {
            newNode = (struct node *)malloc(sizeof(struct node));
            newNode->data = x;
            newNode->RC = newNode->LC = NULL;
            ptr->LC = newNode;
            enqueue(&q, newNode);
        }

        printf("Enter value of right child of %d : ", ptr->data);
        scanf("%d", &x);

        if (x != -1)
        {
            newNode = (struct node *)malloc(sizeof(struct node));
            newNode->data = x;
            newNode->RC = newNode->LC = NULL;
            ptr->RC = newNode;
            enqueue(&q, newNode);
        }
    }
}

void LevelOrderTraversal(struct node *ptr)
{
    struct Queue q;
    create(&q, 100);

    ptr = root;

    printf("%d   ", ptr->data);
    enqueue(&q, root);

    while (!isEmpty(q))
    {
        ptr = dequeue(&q);

        if (ptr->LC)
        {
            printf("%d   ", ptr->LC->data);
            enqueue(&q, ptr->LC);
        }
        if (ptr->RC)
        {
            printf("%d   ", ptr->RC->data);
            enqueue(&q, ptr->RC);
        }
    }
}

int main()
{
    TreeCreate();

    LevelOrderTraversal(root);

    return 0;
}