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

void preorder(struct node *ptr)
{
    if (ptr != NULL)
    {
        printf("%d   ", ptr->data);
        preorder(ptr->LC);
        preorder(ptr->RC);
    }
}

int main()
{
    TreeCreate();

    printf("Tree nodes in preorder sequence are : \n");
    preorder(root);

    return 0;
}