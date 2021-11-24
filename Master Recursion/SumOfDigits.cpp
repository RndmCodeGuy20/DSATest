/**
 * @file SumOfDigits.cpp
 * @author Shantanu Mane (@RndmCodeGuy20) (shantanu.mane.200@outlook.com)
 * @brief   Find the sum of digits of a number.
 * @version  420.69
 * @date 2021-11-24
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <iostream>
using namespace std;

//`IMPORTANT: Base Case : whenever n / 10 will become 0 we can infer that n < 10, therefore we can return that n and it will be added as the last term.

/*
    `Algorithm : 
    - To find the digit at units place, we find the remainder of the number after dividing it by 10.
    - Then we recursively call another function by dividing the number by 10.

    `Example: 
    - 12143 -> 12143 % 10 = 3 (keyEl) and 12143 / 10 = 1214 (since int)
    - 1214 -> 1214 % 10 = 4
    - ...
    - ...
    - 12 % 10 = 1 (keyEl) and 12 / 10 = 1
    - BASE CASE : 1 % 10 = 1 and 1 / 10 = 0, so whenever n / 10 becomes 0 we can infer that n < 10, therefore we can return the value n and it will be added as the last term.
*/

int sumDig(int n)
{
    if (n / 10 == 0)
    {
        return n;
    }

    int keyEl;

    keyEl = n % 10;

    return keyEl + sumDig(n / 10);
}

int main()
{
    int rez;

    rez = sumDig(38746);

    cout << rez << endl;

    return 0;
}