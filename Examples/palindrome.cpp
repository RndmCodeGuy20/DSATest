#include <bits/stdc++.h>
using namespace std;

int main()
{
    bool isPal = false;
    int x;
    cin >> x;

    int reverse = 0, number = x;

    if (x < 0)
    {
        return false;
    }

    while (x > 0)
    {
        reverse = reverse * 10 + x % 10;
        x /= 10;
    }

    if (number == reverse)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }

    return 0;
}