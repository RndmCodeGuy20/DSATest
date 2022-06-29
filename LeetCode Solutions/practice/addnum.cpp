#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
};

ListNode *createList(ListNode *head)
{
    vector<int> arr = {2, 4, 0};
    // int arr2[] = {2, 4, 0};

    ListNode *ptr, *newNode;

    head = new ListNode();
    head->val = arr[0];
    head->next = NULL;

    ptr = head;

    for (int i = 1; i < arr.size(); i++)
    {
        newNode = new ListNode();
        newNode->val = arr[i];
        newNode->next = NULL;
        ptr->next = newNode;
        ptr = ptr->next;
    }

    return head;
}

int main()
{
    ListNode *l1, *l2, *ptr;

    l1 = createList(l1);
    ptr = l1;

    while (ptr)
    {
        printf(" %d ", ptr->val);
        ptr = ptr->next;
    }

    return 0;
}