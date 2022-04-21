#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, el, e = 0, o = 0;

    cin >> n;

    vector<int> vEven;
    vector<int> vOdd;

    for (int i = 0; i < n; i++)
    {
        cin >> el;

        if (el % 2 == 0)
        {
            vEven.push_back(el);
        }
        if (el % 2 != 0)
        {
            vOdd.push_back(el);
        }
    }

    sort(vEven.begin(), vEven.end());
    sort(vOdd.begin(), vOdd.end());

    for (int i = 0; i < vEven.size(); i++)
    {
        cout << vEven[i] << " ";
    }

    cout << endl;

    for (int i = 0; i < vOdd.size(); i++)
    {
        cout << vOdd[i] << " ";
    }

    return 0;
}