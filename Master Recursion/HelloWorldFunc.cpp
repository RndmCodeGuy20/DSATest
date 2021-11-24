/**
 * @file HelloWorldFunc.cpp
 * @author Shantanu Mane (@RndmCodeGuy20) (shantanu.mane.200@outlook.com)
 * @brief Printing "Hello World" repeatedly using recursion
 * @version  420.69
 * @date 2021-11-24
 * 
 * @copyright Copyright (c) 2021
 * 
*/

#include <iostream>
using namespace std;

//! In any recursive program base case is very important!
//*IMPORTANT: Recursive LEAP of FAITH!

//` Prints: Hello World
void hello(int n)
{
    if (n == 0) //` Stopping case or base case
    {
        return; //` Recursive loop STOPPED!
    }
    cout << "Hello World!" << endl;
    hello(n - 1);

    /*
    int i = 0;
    while (i < 10)
    {
        hello(); //` Recursion.
        i++;
    }   //` This will not work properly, because whenever hello is recalled int i = 0; gets executed, therefore, i repeatedly becomes zero every time. So, it prints hello world 10 times in a loop for infinite loops.
    */

    //? What to do then?
    //- We will initialise the first function with a value (n), if n == 0 break the recursion, else operate for n-1.
}

int main()
{
    hello(10); //` Prints : Hello World

    return 0;
}