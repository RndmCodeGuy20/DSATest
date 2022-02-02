#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

int main()
{
    struct node *head;
    head = (struct node *)malloc(sizeof(struct node));

    printf("Size of one node : %d\n", sizeof(struct node));
    printf("Size of node->data : %d\n", sizeof(head->data));
    printf("Size of node->link : %d\n", sizeof(head->next));

    return 0;
}