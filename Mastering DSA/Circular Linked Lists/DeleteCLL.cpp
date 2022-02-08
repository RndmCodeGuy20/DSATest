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

struct node *delEl(struct node *head, int pos)
{
    int x;
    struct node *ptr = head, *q;

    if (pos == 0)
    {
        while (ptr->next != head)
        {
            ptr = ptr->next;
        }

        ptr->next = head->next;
        x = head->data;

        delete head;

        head = ptr->next;
    }
    else
    {
        for (int i = 0; i < pos - 2; i++)
        {
            ptr = ptr->next;
        }

        q = ptr->next;
        ptr->next = q->next;

        x = q->data;

        delete q;
    }

    cout << "\nDeleted Node : " << x << "\n";

    return head;
}

int main()
{
    struct node *head, *ptr;

    int Arr[] = {3, 15, 2, 6, 2, 54};
    head = createList(head, Arr, 6);

    dispList(head);

    head = delEl(head, 0);
    dispList(head);

    head = delEl(head, 2);
    dispList(head);

    return 0;
}
