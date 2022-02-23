#include <iostream>
#include "Queue.h"
using namespace std;

struct node *root = NULL;

void CreateTree()
{
    struct node *ptr, *newNode;
    int num;
    struct Queue q;

    create(&q, 100);

    printf("Enter the value of the root node : ");
    scanf("%d", &num);

    root = (struct node *)malloc(sizeof(struct node));
    root->data = num;
    root->LC = root->RC = NULL;
    enqueue(&q, root);

    while (!isEmpty(q))
    {
        ptr = dequeue(&q);

        printf("Enter the value of left child of %d : (-1 to exit) ", ptr->data);
        scanf("%d", &num);

        if (num != -1)
        {
            newNode = (struct node *)malloc(sizeof(struct node));
            newNode->data = num;
            newNode->LC = newNode->RC = NULL;
            ptr->LC = newNode;

            enqueue(&q, newNode);
        }

        printf("Enter the value of right child of %d : (-1 to exit) ", ptr->data);
        scanf("%d", &num);

        if (num != -1)
        {
            newNode = (struct node *)malloc(sizeof(struct node));
            newNode->data = num;
            newNode->LC = newNode->RC = NULL;
            ptr->RC = newNode;

            enqueue(&q, newNode);
        }
    }
}

void preOrder(struct node *ptr)
{
    if (ptr != NULL)
    {
        printf("%d  ➡️   ", ptr->data);
        preOrder(ptr->LC);
        preOrder(ptr->RC);
    }
}

void inOrder(struct node *ptr)
{
    if (ptr != NULL)
    {
        inOrder(ptr->LC);
        printf("%d  ➡️   ", ptr->data);
        inOrder(ptr->RC);
    }
}

void postOrder(struct node *ptr)
{
    if (ptr != NULL)
    {
        postOrder(ptr->LC);
        postOrder(ptr->RC);
        printf("%d  ➡️   ", ptr->data);
    }
}

void levelOrder(struct node *ptr)
{
    struct Queue lq;

    create(&lq, 100);

    printf("%d  ➡️  ", ptr->data);
    enqueue(&lq, ptr);

    while (!isEmpty(lq))
    {
        ptr = dequeue(&lq);

        if (ptr->LC)
        {
            printf("%d   ➡️   ", ptr->LC->data);
            enqueue(&lq, ptr->LC);
        }

        if (ptr->RC)
        {
            printf("%d   ➡️   ", ptr->RC->data);
            enqueue(&lq, ptr->RC);
        }
    }
}

// int count(struct node *ptr)
// {
//     ptr = root;

//     static int x = 0;
//     static int y = 0;

//     if (ptr != NULL)
//     {
//         x = count(ptr->RC);
//         y = count(ptr->LC);

//         return x + y + 1;
//     }

//     return 0;
// }

int main()
{
    CreateTree();

    printf("Preorder traversal : \n");
    preOrder(root);

    printf("\nInorder traversal : \n");
    inOrder(root);

    printf("\nPostorder traversal : \n");
    postOrder(root);

    printf("\nLevel Order Traversal : \n");
    levelOrder(root);

    // printf("\nNumber of nodes %d\n", count(root));

    return 0;
}