/**
 * @file HelloNumRec.cpp
 * @author Shantanu Mane (@RndmCodeGuy20) (shantanu.mane.200@outlook.com)
 * @brief 
 * @version  420.69
 * @date 2021-11-24
 * 
 * @copyright Copyright (c) 2021
 * 
*/

#include <iostream>
using namespace std;

//`IMPORTANT: Base Case

void helloNum(int i, int n)
{
    if (i == n + 1)
    {
        return;
    }

    cout << i << " ";

    helloNum(i + 1, n);
}

int main()
{
    helloNum(0, 20);

    return 0;
}
