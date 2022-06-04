/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int> &nums, int target) {
        vector<int> rez;

        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (nums[i] + nums[j] == target)
                {
                    rez.push_back(i);
                    rez.push_back(j);
                }
                
            }
            
        }
        
        return rez;
    }
};
// @lc code=end

