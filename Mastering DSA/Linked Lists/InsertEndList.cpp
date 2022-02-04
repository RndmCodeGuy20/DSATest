#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

struct node *insertEnd(struct node *head, int data)
{
    struct node *newNode, *ptr, *tail;

    newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = data;

    if (head == NULL)
    {
        newNode->next = NULL;
        head = tail = newNode;
    }
    else
    {
        ptr = head;
        while (ptr->next != NULL)
        {
            ptr->next = newNode;
            newNode->next = NULL;
            tail = newNode;
        }
    }

    return tail;
}

int main()
{
    struct node *head, *tail;
    head = tail = NULL;

    return 0;
}
