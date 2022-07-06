/*
 * @lc app=leetcode id=1470 lang=cpp
 *
 * [1470] Shuffle the Array
 */

// @lc code=start
class Solution
{
public:
    vector<int> shuffle(vector<int> &nums, int n)
    {
        vector<int> rez;
        int x = 0, y = n;
        while (x < n && y < 2 * n)
        {
            rez.push_back(nums[x++]);
            rez.push_back(nums[y++]);
        }
        return rez;
    }
};
// @lc code=end
