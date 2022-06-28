#include <iostream>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
};

ListNode *createList(ListNode *head, int arr[], int n)
{
    ListNode *ptr, *newNode;

    head = (ListNode *)malloc(sizeof(ListNode));
    head->val = arr[0];
    head->next = NULL;

    ptr = head;

    for (int i = 1; i < n; i++)
    {
        newNode = (ListNode *)malloc(sizeof(ListNode));
        newNode->val = arr[i];
        newNode->next = NULL;
        ptr->next = newNode;
        ptr = ptr->next;
    }

    return head;
}

int ListtoNum(ListNode *list)
{
    ListNode *ptr = list;
    int num, n = 10;

    num = ptr->val;
    if (ptr->next == NULL)
    {
        return num;
    }
    ptr = ptr->next;

    while (ptr)
    {
        num += n * ptr->val;
        n *= 10;
        ptr = ptr->next;
    }

    return num;
}

int main()
{
    int arr[] = {0};
    ListNode *ptr;
    ListNode *list = createList(list, arr, 0);

    ptr = list;

    while (ptr)
    {
        printf(" %d ->", ptr->val);
        ptr = ptr->next;
    }

    printf("\n%d", ListtoNum(list));

    return 0;
}