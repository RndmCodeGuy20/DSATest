#include <iostream>
using namespace std;

struct node
{
    int data;
    int priority;
    struct node *next;
};

int main()
{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    struct node *tail = (struct node *)malloc(sizeof(struct node));

    head->data = 38;
    head->priority = 1;
    head->next = tail;

    tail->data = 83;
    tail->priority = 2;
    tail->next = NULL;

    printf("priority of head node : %d\n", head->priority);
    printf("priority of head's next node : %d\n", head->next->priority);
    printf("priority of head's next node : %d\n", tail->priority);

    return 0;
}