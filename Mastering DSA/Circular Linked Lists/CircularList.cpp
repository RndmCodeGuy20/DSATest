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

    ptr->next = head;

    return head;
}

void dispList(struct node *head)
{
    struct node *ptr = head;

    do
    {
        printf("%d   ", ptr->data);
        ptr = ptr->next;
    } while (ptr != head);
}

int main()
{
    struct node *head, *ptr;

    int Arr[] = {3, 15, 2, 6, 2, 54};
    head = createList(head, Arr, 6);

    dispList(head);

    return 0;
}
