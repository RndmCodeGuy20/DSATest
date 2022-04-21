#include <bits/stdc++.h>
using namespace std;

int main()
{
    //$ IMPORTANT: Pair is a way of creating a Composite-DataType composed of 2 different primitive/composite datatypes.

    pair<int, int> pairInts; //- A pair of 2 ints.

    pair<int, string> pairIntStr; //- A pair of an int and a string

    pair<vector<int>, string> pairVectStr; //- A pair of a vector of type int and a string.

    pair<int, pair<int, string>> pairIntPair; //- A pair of an int and a pair which is in turn a pair of an int and a string

    pairInts = {3, 77};
    cout << pairInts.first << " " << pairInts.second << endl;

    pairIntStr = {20, "March"};
    cout << pairIntStr.first << " " << pairIntStr.second << endl;

    pairVectStr = {{2, 1, 4, 1, 5}, "Shantanu"};
    for (int i = 0; i < pairVectStr.first.size(); i++)
    {
        cout << pairVectStr.first[i] << " ";
    }
    cout << pairVectStr.second << endl;

    pairIntPair = {20, {20, "Shantanu"}};
    cout << pairIntPair.first << " " << pairIntPair.second.first << " " << pairIntPair.second.second << endl;

    return 0;
}