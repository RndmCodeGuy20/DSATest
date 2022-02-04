#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

struct node *createList(struct node *head, int Arr[], int n)
{
    head = (struct node *)malloc(sizeof(struct node));
    head->data = Arr[0];
    head->next = NULL;

    struct node *ptr, *newNode;
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

struct node *deleteFirst(struct node *head)
{
    struct node *temp;

    temp = head;
    head = head->next;

    free(temp);

    return head;
}

struct node *deletePos(struct node *head, int pos)
{
    struct node *ptr, *ptrTrail;

    ptr = head;
    ptrTrail = NULL;

    for (int i = 0; i < pos - 1 && ptr; i++)
    {
        ptrTrail = ptr;
        ptr = ptr->next;
    }

    ptrTrail->next = ptr->next;

    free(ptr);

    return head;
}

void dispList(struct node *head)
{
    struct node *ptr;
    ptr = head;

    cout << "\n\n";

    while (ptr != NULL)
    {
        printf("    [  %d  ]   ➡️", ptr->data);
        ptr = ptr->next;
    }
}

int main()
{
    struct node *head;
    int Array[] = {3, 1, 5, 3, 7, 5, 8};

    head = createList(head, Array, 7);
    dispList(head);

    head = deleteFirst(head);
    dispList(head);

    head = deletePos(head, 2);
    dispList(head);

    return 0;
}