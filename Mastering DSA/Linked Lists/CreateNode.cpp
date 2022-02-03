#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

struct node *createNode(struct node *head)
{
    struct node *ptr, *newNode;

    newNode = (struct node *)malloc(sizeof(struct node));
    ptr = head;

    if (head == NULL)
    {
        printf("\nEnter data in the node : ");
        scanf("%d", &newNode->data);
        newNode->next = NULL;
        head = newNode;
    }
    else
    {
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }

        printf("\nEnter data in the node : ");
        scanf("%d", &newNode->data);
        newNode->next = NULL;
        ptr->next = newNode;
    }

    return head;
}

int main()
{
    struct node *head = NULL;
    struct node *ptr;

    head = createNode(head);
    head = createNode(head);
    head = createNode(head);
    head = createNode(head);

    ptr = head;
    printf("Head --->  %u", ptr);

    //` Displaying the entire list.
    while (ptr != NULL)
    {
        printf("|  %d  |  ➡️   ", ptr->data);
        ptr = ptr->next;
    }

    return 0;
}
