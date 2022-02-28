#include <iostream>
using namespace std;

struct node
{
    struct node *LC;
    int data;
    struct node *RC;
};

struct node *root = NULL;

void Insert(int key)
{
    struct node *ptr = root;
    struct node *q, *newNode;

    if (root == NULL)
    {
        newNode = (struct node *)malloc(sizeof(struct node));
        newNode->data = key;
        newNode->LC = newNode->RC = NULL;
        root = newNode;
        return;
    }

    while (ptr != NULL)
    {
        q = ptr;

        if (key < ptr->data)
        {
            ptr = ptr->LC;
        }
        else if (key > ptr->data)
        {
            ptr = ptr->RC;
        }
        else
        {
            return;
        }
    }

    newNode = (struct node *)malloc(sizeof(struct node));
    newNode->LC = newNode->RC = NULL;
    newNode->data = key;

    if (key < q->data)
    {
        q->LC = newNode;
    }
    else
    {
        q->RC = newNode;
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
    ptr = ptr->LC;

    while (ptr != NULL && ptr->RC != NULL)
    {
        ptr = ptr->RC;
    }

    return ptr;
}

struct node *InorderSucc(struct node *ptr)
{
    ptr = ptr->RC;

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

struct node *Search(int key)
{
    struct node *ptr = root;

    while (ptr != NULL)
    {
        if (ptr->data == key)
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

void inOrder(struct node *ptr)
{
    if (ptr != NULL)
    {
        inOrder(ptr->LC);
        printf("%d  ➡️   ", ptr->data);
        inOrder(ptr->RC);
    }
}

int main()
{
    Insert(30);
    Insert(10);
    Insert(40);
    Insert(15);
    Insert(35);

    inOrder(root);

    struct node *rez = Search(15);

    if (rez != NULL)
    {
        printf("\nFound at position : %u\n", rez);
    }
    else
    {
        printf("\nFound at position : NULL\n");
    }

    rez = Search(5);

    if (rez != NULL)
    {
        printf("\nFound at position : %u\n", rez);
    }
    else
    {
        printf("\nFound at position : NULL\n");
    }

    delEl(root, 10);
    inOrder(root);

    return 0;
}