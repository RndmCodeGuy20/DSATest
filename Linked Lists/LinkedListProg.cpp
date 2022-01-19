#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL;

struct node *createNode(struct node *head)
{
    struct node *newNode, *ptr;
    int num;
    newNode = (struct node *)malloc(sizeof(struct node));

    printf("Enter the data you want to add in the LL : ");
    scanf("%d", &num);

    newNode->data = num;

    if (head == NULL)
    {
        newNode->next = NULL;
        head = newNode;
    }
    else
    {
        ptr = head;
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = newNode;
        newNode->next = NULL;
    }
    return head;
}

int main()
{
    for (int i = 0; i < 3; i++)
    {
        head = createNode(head);
    }

    struct node *ptr;
    ptr = head;

    while (ptr->next != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    cout << ptr->data << endl;

    return 0;
}