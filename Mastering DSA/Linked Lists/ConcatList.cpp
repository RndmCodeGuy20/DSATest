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

struct node *concatLists(struct node *head1, struct node *head2)
{
    struct node *ptr;

    ptr = head1;

    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }

    ptr->next = head2;

    return head1;
}

int main()
{
    struct node *head1, *head2, *ptr;
    int Array1[] = {4, 1, 5, 2, 3, 6};
    int Array2[] = {2, 7, 8, 4};

    head1 = createList(head1, Array1, 6);
    head2 = createList(head2, Array2, 4);

    head1 = concatLists(head1, head2);

    ptr = head1;

    while (ptr != NULL)
    {
        printf("    [  %d  ]   ➡️", ptr->data);
        ptr = ptr->next;
    }

    return 0;
}