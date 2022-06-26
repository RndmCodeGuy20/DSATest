#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<string> strs = {"dog", "don", "deal"};
    string rez;
    char temp;

    int min = strs[0].size();

    for (int i = 0; i < strs.size(); i++)
    {
        if (min > strs[i].size())
        {
            min = strs[i].size();
        }
    }

    cout << min;

    for (int i = 0; i < min; i++)
    {
        temp = strs[0][i];
        for (int j = 1; j < strs.size(); j++)
        {
            if (temp != strs[j][i])
            {
                break;
            }
            rez += temp;
        }
    }

    cout << rez;

    return 0;
}