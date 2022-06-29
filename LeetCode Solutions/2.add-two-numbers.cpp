/*
 * @lc app=leetcode id=2 lang=cpp
 *
 * [2] Add Two Numbers
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        ListNode *ptr, *rez = new ListNode(0);
        ptr = rez;
        int carry = 0;

        while (l1 || l2 || carry == 1)
        {
            int sum = 0;

            if (l1)
            {
                sum += l1->val;
                l1 = l1->next;
            }
            if (l2)
            {
                sum += l2->val;
                l2 = l2->next;
            }

            sum += carry;
            carry = sum / 10;

            ListNode *newNode = new ListNode(sum % 10);
            newNode->next = NULL;
            ptr->next = newNode;
            ptr = ptr->next;
        }

        return rez->next;
    }
};
// @lc code=end
