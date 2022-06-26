/*
 * @lc app=leetcode id=14 lang=cpp
 *
 * [14] Longest Common Prefix
 */

// @lc code=start
class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        string rez;
        char temp;

        int min = strs[0].size();

        for (int i = 0; i < strs.size(); i++)
        {
            if (min > strs[i].size())
            {
                min = strs[i].size();
            }
        }

        for (int i = 0; i < min; i++)
        {
            temp = strs[0][i];
            for (int j = 1; j < strs.size(); j++)
            {
                if (temp != strs[j][i])
                {
                    return rez;
                }
            }
            rez += temp;
        }

        return rez;
    }
};
// @lc code=end
