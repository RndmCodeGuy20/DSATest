/**
 * @file SumofNum.cpp
 * @author Shantanu Mane (@RndmCodeGuy20) (shantanu.mane.200@outlook.com)
 * @brief To find the sum of numbers 1 to n.
 * @version  420.69
 * @date 2021-11-24
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <iostream>
using namespace std;

//` Algorithm : reverse addition, ie, from n -> 1/0, initialize a var 'sum' and add sumNum(n-1) to it and then return 'sum'

int sumNum(int n)
{
    if (n == 1)
    {
        return 1;
    }

    return n + sumNum(n - 1);
}

int main()
{

    int sum;

    sum = sumNum(5);

    cout << sum << endl;

    return 0;
}