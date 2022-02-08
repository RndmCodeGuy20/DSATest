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

struct node *insEl(struct node *head, int pos, int num)
{
    struct node *ptr, *newNode;
    ptr = head;

    if (pos == 0)
    {
        newNode = (struct node *)malloc(sizeof(struct node));
        newNode->next = head;
        newNode->data = num;

        while (ptr->next != head)
        {
            ptr = ptr->next;
        }
        ptr->next = newNode;
        head = newNode;
    }
    else
    {
        ptr = head;

        for (int i = 0; i < pos - 1; i++)
        {
            ptr = ptr->next;
        }

        newNode = (struct node *)malloc(sizeof(struct node));
        newNode->data = num;
        newNode->next = ptr->next;
        ptr->next = newNode;
    }

    return head;
}

int main()
{
    struct node *head, *ptr;

    int Arr[] = {3, 15, 2, 6, 2, 54};
    head = createList(head, Arr, 6);

    dispList(head);

    cout << "\n\n";

    head = insEl(head, 3, 100);
    head = insEl(head, 0, 999);

    dispList(head);

    return 0;
}
