#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

struct node *createList(struct node *head, int Arr[], int n)
{
    struct node *ptr, *newNode;

    head = (struct node *)malloc(sizeof(struct node));
    head->data = Arr[0];
    head->next = NULL;

    ptr = head;

    for (int i = 1; i < n; i++)
    {
        newNode = (struct node *)malloc(sizeof(struct node));
        newNode->data = Arr[i];
        newNode->next = NULL;
        ptr->next = newNode;
        ptr = ptr->next;
    }

    return head;
}

int checkSorted(struct node *head)
{
    struct node *ptr, *ptrTrail;
    int flag = 1;

    ptr = head;
    ptrTrail = NULL;

    while (ptr->next != NULL)
    {
        ptrTrail = ptr;
        ptr = ptr->next;

        if (ptr->data < ptrTrail->data)
        {
            flag = 0;
        }
    }

    return flag;
}

struct node *remDuplicate(struct node *head)
{
    struct node *ptr, *ptrTrail;

    ptr = head;
    ptrTrail = head->next;

    while (ptr->next != NULL)
    {
        ptrTrail = ptr;
        ptr = ptr->next;

        if (ptr->data == ptrTrail->data)
        {
            ptrTrail->next = ptr->next;
            free(ptr);
            ptr = ptrTrail->next;
        }
    }

    return head;
}

int main()
{
    struct node *headL1, *headL2;

    int Array1[] = {2, 4, 7, 9, 12, 15};
    int Array2[] = {2, 5, 3, 6, 7, 15};

    headL1 = createList(headL1, Array1, 6);
    headL2 = createList(headL2, Array2, 6);

    int flag;
    flag = checkSorted(headL1);

    if (flag == 1)
    {
        printf("\nSorted List!");
    }
    else
    {
        printf("\nUnsorted");
    }

    flag = checkSorted(headL2);

    if (flag == 1)
    {
        printf("\nSorted List!");
    }
    else
    {
        printf("\nUnsorted");
    }

    struct node *headL3;
    int Array3[] = {2, 4, 5, 5, 6, 6, 8, 8, 9};

    headL3 = createList(headL3, Array3, 9);
    headL3 = remDuplicate(headL3);

    struct node *ptr;
    ptr = headL3;

    cout << "\n\n";

    while (ptr != NULL)
    {
        printf("    [  %d  ]   ➡️", ptr->data);
        ptr = ptr->next;
    }

    return 0;
}