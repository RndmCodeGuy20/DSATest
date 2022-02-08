#include <iostream>
using namespace std;

struct node
{
    struct node *prev;
    int data;
    struct node *next;
};

struct node *createDLL(struct node *head, int Arr[], int n)
{
    struct node *ptr, *newNode;

    head = (struct node *)malloc(sizeof(struct node));
    head->data = Arr[0];
    head->next = NULL;
    head->prev = NULL;

    ptr = head;

    for (int i = 1; i < n; i++)
    {
        newNode = (struct node *)malloc(sizeof(struct node));
        newNode->data = Arr[i];
        newNode->next = NULL;
        ptr->next = newNode;
        newNode->prev = ptr;

        ptr = ptr->next;
    }

    return head;
}

void dispList(struct node *head)
{
    struct node *ptr;
    ptr = head;

    while (ptr != NULL)
    {
        printf("[ %u | %d | %u]   ➡️   ", ptr->prev, ptr->data, ptr->next, ptr);
        ptr = ptr->next;
    }
}

int main()
{
    struct node *head, ptr;

    int Arr[] = {5, 1, 6, 4, 8, 2};

    head = createDLL(head, Arr, 6);

    dispList(head);

    return 0;
}