#include <iostream>
using namespace std;

struct node
{
    struct node *LC;
    int data;
    int height;
    struct node *RC;
};

struct node *root = NULL;

int nodeHeight(struct node *ptr)
{
    int hL, hR;

    hL = ptr && ptr->LC ? ptr->LC->height : 0;
    hR = ptr && ptr->RC ? ptr->RC->height : 0;

    return hL > hR ? hL + 1 : hR + 1;
}

int balFac(struct node *ptr)
{
    int hL, hR;

    hL = ptr && ptr->LC ? ptr->LC->height : 0;
    hR = ptr && ptr->RC ? ptr->RC->height : 0;

    return hL - hR;
}

struct node *LLRot(struct node *ptr)
{
    struct node *ptrL = ptr->LC;
    struct node *ptrLR = ptrL->RC;

    ptrL->RC = ptr;
    ptr->LC = ptrLR;

    ptr->height = nodeHeight(ptr);
    ptrL->height = nodeHeight(ptrL);

    if (root == ptr)
    {
        root = ptrL;
    }

    return ptrL;
}

struct node *LRRot(struct node *ptr)
{
    struct node *ptrL = ptr->LC;
    struct node *ptrLR = ptrL->RC;

    ptrL->RC = ptrLR->LC;
    ptr->LC = ptrLR->RC;

    ptrLR->LC = ptrL;
    ptrLR->RC = ptr;

    ptrL->height = nodeHeight(ptrL);
    ptr->height = nodeHeight(ptr);
    ptrLR->height = nodeHeight(ptrLR);

    if (root == ptr)
    {
        root = ptrLR;
    }

    return ptrLR;
}

struct node *RRRot(struct node *ptr)
{
    struct node *ptrR = ptr->RC;
    struct node *ptrRL = ptrR->LC;

    ptrR->LC = ptr;
    ptr->RC = ptrRL;

    ptr->height = nodeHeight(ptr);
    ptrR->height = nodeHeight(ptrR);

    if (ptr == root)
    {
        root = ptrR;
    }

    return ptrR;
}

struct node *RLRot(struct node *ptr)
{
    struct node *ptrR = ptr->RC;
    struct node *ptrRL = ptrR->LC;

    

    ptrRL->LC = ptr;
    ptrRL->RC = ptrR;

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
        newNode->height = 1;

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

    ptr->height = nodeHeight(ptr);

    if (balFac(ptr) == 2 && balFac(ptr->LC) == 1)
    {
        return LLRot(ptr);
    }
    else if (balFac(ptr) == 2 && balFac(ptr->LC) == -1)
    {
        return LRRot(ptr);
    }
    else if (balFac(ptr) == -2 && balFac(ptr->RC) == -1)
    {
        return RRRot(ptr);
    }
    else if (balFac(ptr) == -2 && balFac(ptr->RC) == 1)
    {
        return RLRot(ptr);
    }

    return ptr;
}

int main()
{
    // root = insertEl(root, 50);
    // insertEl(root, 10);
    // insertEl(root, 20); //! LR Rotation

    // root = insertEl(root, 10);
    // insertEl(root, 5);
    // insertEl(root, 2);    // !LL Rotation

    root = insertEl(root, 10);
    insertEl(root, 20);
    insertEl(root, 30);

    printf("LC : %d |  root : %d  height : %d| RC : %d", root->LC->data, root->data, root->height, root->RC->data);

    return 0;
}