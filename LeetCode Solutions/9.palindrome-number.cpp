/*
 * @lc app=leetcode id=9 lang=cpp
 *
 * [9] Palindrome Number
 */

// @lc code=start
class Solution
{
public:
    bool isPalindrome(int x)
    {
        long reverse = 0, number = x;

        if (x < 0)
        {
            return false;
        }

        while (x > 0)
        {
            reverse = reverse * 10 + x % 10;
            x /= 10;
        }

        if (number == reverse)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
// @lc code=end
