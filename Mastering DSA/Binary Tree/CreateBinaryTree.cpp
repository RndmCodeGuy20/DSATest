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

struct node *searchEl(struct node *ptr, int key)
{
    ptr = root;

    while (ptr != root)
    {
        if (key == ptr->data)
        {
            return ptr;
        }
        else if (key < ptr->data)
        {
            ptr = ptr->LC;
        }
        else
        {
            ptr = ptr->RC;
        }
    }

    return NULL;
}

void insertEl(struct node *ptr, int key)
{
    struct node *trail = NULL;

    while (ptr != NULL)
    {
        trail = ptr;

        if (key == ptr->data)
        {
            return;
        }
        else if (key < ptr->data)
        {
            ptr = ptr->LC;
        }
        else
        {
            ptr = ptr->RC;
        }
    }

    struct node *newNode = (struct node *)malloc(sizeof(struct node));

    newNode->LC = newNode->RC = NULL;
    newNode->data = key;

    if (key < trail->data)
    {
        trail->LC = newNode;
    }
    else
    {
        trail->RC = newNode;
    }
}

int Height(struct node *ptr)
{
    if (ptr == NULL)
    {
        return 0;
    }

    int x, y;

    x = Height(ptr->LC);
    y = Height(ptr->RC);

    return x > y ? x + 1 : y + 1;
}

struct node *InorderPred(struct node *ptr)
{
    while (ptr != NULL && ptr->RC != NULL)
    {
        ptr = ptr->RC;
    }

    return ptr;
}

struct node *InorderSucc(struct node *ptr)
{
    while (ptr != NULL && ptr->LC != NULL)
    {
        ptr = ptr->LC;
    }

    return ptr;
}

struct node *delEl(struct node *ptr, int key)
{
    struct node *q;

    if (ptr == NULL)
    {
        return NULL;
    }
    if (ptr->LC == NULL && ptr->RC == NULL)
    {
        if (ptr == root)
        {
            root = NULL;
        }
        free(ptr);

        return NULL;
    }

    if (key < ptr->data)
    {
        ptr->LC = delEl(ptr->LC, key);
    }
    else if (key > ptr->data)
    {
        ptr->RC = delEl(ptr->RC, key);
    }
    else
    {
        if (Height(ptr->LC) > Height(ptr->RC))
        {
            q = InorderPred(ptr->LC);
            ptr->data = q->data;
            ptr->LC = delEl(ptr->LC, q->data);
        }
        else
        {
            q = InorderSucc(ptr->RC);
            ptr->data = q->data;
            ptr->RC = delEl(ptr->RC, q->data);
        }
    }

    return ptr;
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

void inorder(struct node *ptr)
{
    if (ptr != NULL)
    {
        inorder(ptr->LC);
        printf("%d   ", ptr->data);
        inorder(ptr->RC);
    }
}

void postorder(struct node *ptr)
{
    if (ptr != NULL)
    {
        postorder(ptr->LC);
        postorder(ptr->RC);
        printf("%d   ", ptr->data);
    }
}

int main()
{
    TreeCreate();

    delEl(root, 5);

    printf("Tree nodes in preorder sequence are : \n");
    preorder(root);

    cout << "\n\n";

    printf("Tree nodes in in-order sequence are : \n");
    inorder(root);

    cout << "\n\n";

    printf("Tree nodes in postorder sequence are : \n");
    postorder(root);

    cout << "\n\n";

    return 0;
}