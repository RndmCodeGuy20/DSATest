#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

struct node *insertNode(struct node *head, int num, int pos)
{
    struct node *newNode, *ptr;

    newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = num;

    if (head == NULL)
    {
        newNode->next = NULL;
        head = newNode;
    }
    else if (head != NULL && pos == 0)
    {
        newNode->next = head;
        head = newNode;
    }
    else if (head != NULL && pos > 0)
    {
        ptr = head;

        for (int i = 0; i < pos - 1; i++)
        {
            ptr = ptr->next;
        }

        newNode->next = ptr->next;
        ptr->next = newNode;
    }

    return head;
}

int main()
{
    struct node *head = NULL;
    struct node *ptr;

    head = insertNode(head, 100, 0);
    head = insertNode(head, 200, 0);
    head = insertNode(head, 300, 2);
    head = insertNode(head, 400, 1);
    head = insertNode(head, 500, 4);

    ptr = head;

    while (ptr != NULL)
    {
        printf("|  %d  |  ➡️   ", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL");

    return 0;
}
