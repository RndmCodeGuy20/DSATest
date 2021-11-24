/**
 * @file FactorialSeq.cpp
 * @author Shantanu Mane (@RndmCodeGuy20) (shantanu.mane.200@outlook.com)
 * @brief To find the product of numbers 1 to n. (factorial)
 * @version  420.69
 * @date 2021-11-24
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <iostream>
using namespace std;

//` Algorithm : reverse multiplication, ie, from n -> 1, initialize a var 'prod' and add sumNum(n-1) to it and then return 'prod'

int facSeq(int n)
{
    if (n == 1)
    {
        return 1;
    }

    return n * facSeq(n - 1);
}

int main()
{
    int prod;

    prod = facSeq(5);

    cout << prod << endl;

    return 0;
}