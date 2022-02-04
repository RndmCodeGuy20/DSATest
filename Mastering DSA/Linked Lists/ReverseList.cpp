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

struct node *revList(struct node *head)
{
    struct node *p, *q, *r;

    p = head;
    q = r = NULL;

    while (p != NULL)
    {
        r = q;
        q = p;
        p = p->next;
        q->next = r;
    }

    head = q;

    return head;
}

int main()
{
    struct node *head, *ptr;
    int Array[] = {4, 1, 5, 2, 3, 6};

    head = createList(head, Array, 6);

    head = revList(head);

    ptr = head;

    while (ptr != NULL)
    {
        printf("    [  %d  ]   ➡️", ptr->data);
        ptr = ptr->next;
    }

    return 0;
}