/*
 * @lc app=leetcode id=1672 lang=cpp
 *
 * [1672] Richest Customer Wealth
 */

// @lc code=start
class Solution
{
public:
    int maximumWealth(vector<vector<int>> &accounts)
    {
        int max = 0;

        for (int i = 0; i < accounts.size(); i++)
        {
            int maxTemp = 0;
            for (int j = 0; j < accounts[i].size(); j++)
            {
                maxTemp += accounts[i][j];
            }
            if (maxTemp > max)
            {
                max = maxTemp;
            }
        }

        return max;
    }
};
// @lc code=end
