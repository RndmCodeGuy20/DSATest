#include <bits/stdc++.h>
using namespace std;

int main()
{
    pair<int, int> p[5];

    p[0] = {4, 5};
    p[1] = {6, 7};
    p[2] = {3, 4};
    p[3] = {2, 3};
    p[4] = {1, 2};

    cout << "Unsorted Array : 💔" << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << p[i].first << " " << p[i].second << endl;
    }

    //- IMPORTANT: Sorting is done in a way that the ordering is done by the "first" element, but wherever the "first" is equal, the ties are broken by comparing second.

    sort(p, p + 5);

    cout << "\nSorted Array : 💖" << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << p[i].first << " " << p[i].second << endl;
    }

    // vector<pair<int, string>> vP = {{20, "Shantanu"},
    //                                 {23, "Vaishali"},
    //                                 {1, "Gajanan"}};

    // for (int i = 0; i < vP.size(); i++)
    // {
    //     cout << vP[i].first << " " << vP[i].second << endl;
    // }

    return 0;
}