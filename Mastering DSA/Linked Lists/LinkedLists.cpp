#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

void RecursiveDisp(struct node *ptr)
{
    if (ptr == NULL)
    {
        return;
    }

    printf("|   %d   |   ➡️   ", ptr->data);

    RecursiveDisp(ptr->next);
}

int main()
{
    struct node *head;
    head = (struct node *)malloc(sizeof(struct node));

    struct node *first, *second, *third, *fourth, *ptr;

    first = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));

    //` Defining the data part of the nodes.
    first->data = 3;
    second->data = 8;
    third->data = 7;
    fourth->data = 9;

    //` Linking the nodes with each other.
    head = first;
    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = NULL;

    ptr = head;
    printf("Head --->  %u", ptr);

    //` Displaying the entire list.
    while (ptr != NULL)
    {
        printf("|  %d  |  %u  |  ➡️   ", ptr->data, ptr->next);
        ptr = ptr->next;
    }

    cout << "\n\n";

    ptr = head;

    //` Displaying till the last element.
    while (ptr->next != NULL)
    {
        printf("|  %d  |  %u  |  ➡️   ", ptr->data, ptr->next);
        ptr = ptr->next;
    }

    cout << "\n\n";

    RecursiveDisp(head);

    printf("\n\nSize of one node : %d\n", sizeof(struct node));
    printf("Size of node->data : %d\n", sizeof(head->data));
    printf("Size of node->link : %d\n", sizeof(head->next));

    free(head);
    free(first);
    free(second);
    free(third);
    free(fourth);
    free(ptr);

    return 0;
}