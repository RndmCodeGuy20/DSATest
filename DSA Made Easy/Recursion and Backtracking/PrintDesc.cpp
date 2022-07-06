#include <bits/stdc++.h>
using namespace std;

int printDesc(int n)
{
    if (n)
    {
        cout << n << "\t";
        return printDesc(n - 1);
    }
    else
    {
        return 0;
    }
}

int main()
{
    printDesc(10);
    return 0;
}