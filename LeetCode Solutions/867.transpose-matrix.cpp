/*
 * @lc app=leetcode id=867 lang=cpp
 *
 * [867] Transpose Matrix
 */

// @lc code=start
class Solution
{
public:
    vector<vector<int>> transpose(vector<vector<int>> &matrix)
    {
        int m = matrix.size();
        int n = matrix[0].size();

        vector<vector<int>> mat(n, vector<int>(m, 0));

        for (int row = 0; row < m; row++)
        {
            for (int col = 0; col < n; col++)
            {
                mat[col][row] = matrix[row][col];
            }
        }

        return mat;
    }
};
// @lc code=end
