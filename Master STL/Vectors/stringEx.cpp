#include <bits/stdc++.h>
using namespace std;

int value(char s)
{
    if (s == 'I')
    {
        return 1;
    }
    else if (s == 'V')
    {
        return 5;
    }
    else if (s == 'X')
    {
        return 10;
    }
    else if (s == 'L')
    {
        return 50;
    }
    else if (s == 'C')
    {
        return 100;
    }
    else if (s == 'D')
    {
        return 500;
    }
    else if (s == 'M')
    {
        return 1000;
    }
    else
    {
        return 0;
    }
}

int romanToInt(string s)
{
    int res = 0;

    for (int i = 0; i < s.length() - 1; i++)
    {
        if (value(s[i]) >= value(s[i + 1]))
        {
            res += value(s[i]);
        }
        else
        {
            res -= value(s[i]);
        }
    }

    return res + value(s[s.length() - 1]);
}

int main()
{
    cout << romanToInt("MCXIV") << endl;

    return 0;
}