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

    return 0;
}