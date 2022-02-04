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

struct node *mergeLists(struct node *head1, struct node *head2)
{
    struct node *head3, *last;

    head3 = last = NULL;

    if (head1->data < head2->data)
    {
        head3 = last = head1;
        head1 = head1->next;
        last->next = NULL;
    }
    else
    {
        head3 = last = head2;
        head2 = head2->next;
        last->next = NULL;
    }

    while (head1 != NULL && head2 != NULL)
    {
        if (head1->data < head2->data)
        {
            last->next = head1;
            head1 = head1->next;
            last = last->next;
            last->next = NULL;
        }
        else
        {
            last->next = head2;
            head2 = head2->next;
            last = last->next;
            last->next = NULL;
        }
    }

    if (head1 != NULL && head2 == NULL)
    {
        last->next = head1;
    }
    else
    {
        last->next = head2;
    }

    return head3;
}

int main()
{
    struct node *head1, *head2, *ptr;

    int Arr1[] = {2, 8, 10, 15};
    int Arr2[] = {4, 7, 12, 14};

    head1 = createList(head1, Arr1, 4);
    head2 = createList(head2, Arr2, 4);

    head1 = mergeLists(head1, head2);

    ptr = head1;

    while (ptr != NULL)
    {
        printf("[   %d   ]   ➡️   ", ptr->data);
        ptr = ptr->next;
    }

    return 0;
}