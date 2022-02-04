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

bool checkLoop(struct node *head)
{
    struct node *p, *q;

    p = q = head;

    do
    {
        p = p->next;
        q = q->next;

        if (q != NULL)
        {
            q = q->next;
        }

    } while (p != NULL && q != NULL);

    if (p == q)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    struct node *head, *ptr, *ptr2;

    int Array[] = {3, 9, 4, 1, 5, 8, 2};

    head = createList(head, Array, 7);

    // head = ptr;
    // head = ptr2;

    // ptr2 = ptr2->next;
    // ptr2 = ptr2->next;

    // while (ptr->next != NULL)
    // {
    //     ptr = ptr->next;
    // }

    // ptr->next = ptr2;

    if (checkLoop(head))
    {
        printf("Loop condition!");
    }
    else
    {
        printf("NO loop condition");
    }

    return 0;
}