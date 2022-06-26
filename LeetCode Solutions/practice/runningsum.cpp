#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums = {1, 2, 3, 4};
    vector<int> rez;
    int sum;

    for (int i = 0; i < nums.size(); i++)
    {
        sum = 0;
        for (int j = 0; j <= i; j++)
        {
            sum += nums[j];
        }
        rez.push_back(sum);
    }

    for (int i = 0; i < nums.size(); i++)
    {
        printf("%d ", rez[i]);
    }

    /**
     * @brief Another possible solution might be ->
     * [1, 2, 3]
     *  0  1  2
     * i starts from 1;
     * num[i] += num[i-1]
     *
     * - Trace :-
     * 1. i = 1
     *    num[1] += num[0]
     *      2 += 1 : num[1] === 3
     * 2. i = 2
     *    num[2] += num[1]
     *      3 += 3 : num[1] === 6
     *
     * * Code :-
     *
     * for(int i = 1; i < len(num); i++){
     *      num[i] += num[i-1]
     * }
     *
     * return num
     *
     */

    return 0;
}