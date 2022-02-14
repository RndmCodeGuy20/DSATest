/**
 * @file BinarySearchTreeOps.cpp
 * @author Shantanu Mane (@RndmCodeGuy20) (shantanu.mane.200@outlook.com)
 * @brief   Operations on a given binary search tree.
 * @version  2.0.4
 * @date 2022-02-11
 *
 * @copyright Copyright (c) 2022
 *
 *
 * @image       50
 *             /  \
 *            30  60
 *           /  \
 *          20  40
 */

#include <iostream>
using namespace std;

struct node
{
    struct node *RC;
    int data;
    struct node *LC;
};

struct node *root = NULL;

struct node *searchEl(struct node *ptr, int key)
{
    while (ptr != NULL)
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

struct node *insertEl(struct node *ptr, int key)
{
    struct node *trail = NULL, *newNode;

    if (ptr == NULL)
    {
        newNode = (struct node *)malloc(sizeof(struct node));
        newNode->data = key;
        newNode->LC = newNode->RC = NULL;

        return newNode;
    }

    if (key < ptr->data)
    {
        ptr->LC = insertEl(ptr->LC, key);
    }
    else if (key > ptr->data)
    {
        ptr->RC = insertEl(ptr->RC, key);
    }

    return ptr;
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

int count(struct node *ptr)
{
    if (ptr != NULL)
    {
        return count(ptr->LC) + count(ptr->RC) + 1;
    }

    return 0;
}

int leafCount(struct node *ptr)
{
    if (ptr == NULL)
    {
        return 0;
    }
    if (ptr->LC == NULL && ptr->RC == NULL)
    {
        return 1;
    }
    else
    {
        return leafCount(ptr->LC) + leafCount(ptr->RC);
    }
}

int main()
{
    char choice;
    int num = 0;

    root = insertEl(root, 50);
    insertEl(root, 30);
    insertEl(root, 60);
    insertEl(root, 20);
    insertEl(root, 40);

    printf("~~~~~~~Binary Search Tree Operations~~~~~~~\n\nD. Delete Element\nS. Search Element\nE. PreOrder Traversal\nN. InOrder Traversal\nO. PostOrder Traversal\nC. Number of Nodes\nL. Number of Leaf Nodes\nX. Exit Program\nEnter your choice : ");
    cin >> choice;

    switch (choice)
    {
    case 'D':
        printf("Enter the element you want to delete : ");
        cin >> num;
        root = delEl(root, num);
        postorder(root);
        break;

    case 'S':
        printf("Enter the element you want to search : ");
        cin >> num;

        if (searchEl(root, num))
        {
            printf("\nKey element FOUND!!!");
        }
        else
        {
            printf("\nElement NOT found!!!");
        }
        break;

    case 'E':
        preorder(root);
        break;

    case 'N':
        inorder(root);
        break;

    case 'O':
        postorder(root);
        break;

    case 'C':
        printf("Number of nodes : %d\n", count(root));
        break;

    case 'L':
        printf("Number of leaf nodes : %d\n", leafCount(root));
        break;

    default:
        break;
    }

    return 0;
}