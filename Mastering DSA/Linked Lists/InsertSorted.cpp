#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

struct node *createList(struct node *head, int Arr[], int n)
{
    struct node *newNode, *ptr;

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

struct node *insertSorted(struct node *head, int data)
{
    struct node *newNode, *ptr, *ptrTrail;

    newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = data;

    ptr = head;
    ptrTrail = NULL;

    while (ptr && ptr->data < data)
    {
        ptrTrail = ptr;
        ptr = ptr->next;
    }

    ptrTrail->next = newNode;
    newNode->next = ptr;

    return head;
}

int main()
{
    struct node *head = NULL, *ptr;
    int Array[5] = {3, 7, 9, 10, 14};

    head = createList(head, Array, 5);

    ptr = head;

    while (ptr != NULL)
    {
        printf("[  %d  ]  ➡️   ", ptr->data);
        ptr = ptr->next;
    }

    head = insertSorted(head, 15);

    cout << "\n\n";

    ptr = head;

    while (ptr != NULL)
    {
        printf("[  %d  ]  ➡️   ", ptr->data);
        ptr = ptr->next;
    }

    return 0;
}
