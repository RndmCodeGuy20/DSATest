#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
};

ListNode *createList(ListNode *head, vector<int> arr, int n)
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
    vector<int> arr = {2, 4, 3};
    vector<int> arr2 = {5, 6, 4};

    ListNode *ptr;
    ListNode *list = createList(list, arr, arr.size());
    ListNode *list2 = createList(list, arr2, arr2.size());

    ptr = list;

    while (ptr)
    {
        printf(" %d ->", ptr->val);
        ptr = ptr->next;
    }

    cout << endl;

    ptr = list2;

    while (ptr)
    {
        printf(" %d ->", ptr->val);
        ptr = ptr->next;
    }

    cout << ListtoNum(list) << " + " << ListtoNum(list2) << " = " << ListtoNum(list) + ListtoNum(list2)
         << endl;

    int rez = ListtoNum(list) + ListtoNum(list2);
    vector<int> rezarr;
    // int n;

    while (rez)
    {
        // n = rez % 10;
        rezarr.push_back(rez % 10);
        rez /= 10;
    }

    ListNode *rezlist = createList(rezlist, rezarr, rezarr.size());

    ptr = rezlist;

    while (ptr)
    {
        printf(" %d ->", ptr->val);
        ptr = ptr->next;
    }

    return 0;
}