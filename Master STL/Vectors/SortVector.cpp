#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> vE;

    vE.push_back(3);
    vE.push_back(2);
    vE.push_back(5);
    vE.push_back(1);
    vE.push_back(6);
    vE.push_back(4);

    //` int a[n] --> sort(a, a + n);   we pass the pointer to the first and the last position as parameters
    //` vector<int> v --> sort(v.begin(), v.end());
    //` string s --> sort(s.begin(), s.end());

    //$ begin() and end() are called iterators and are somewhat similar to pointers.

    sort(vE.begin(), vE.end());

    for (int i = 0; i < vE.size(); i++)
    {
        cout << vE[i] << " ";
    }

    // sort(vE.end(), vE.begin());

    // for (int i = 0; i < vE.size(); i++)
    // {
    //     cout << vE[i] << " ";
    // }

    return 0;
}