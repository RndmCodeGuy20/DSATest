/*
 * @lc app=leetcode id=412 lang=cpp
 *
 * [412] Fizz Buzz
 */

// @lc code=start
class Solution
{
public:
    vector<string> fizzBuzz(int n)
    {

        vector<string> rez;

        for (int i = 1; i <= n; i++)
        {
            if (i % 3 == 0 && i % 5 == 0)
                rez.push_back("FizzBuzz");
            else if (i % 3 == 0)
                rez.push_back("Fizz");
            else if (i % 5 == 0)
                rez.push_back("Buzz");
            else
                rez.push_back(to_string(i));
        }

        return rez;
    }
};
// @lc code=end
