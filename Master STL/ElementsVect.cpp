#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> vE;

    printf("Empty vector : %d", vE);

    vE.push_back(20); //- Insert the value x to the end of the vector O(1).
    vE.push_back(23);
    vE.push_back(1);

    printf("\nVector with added values : size (%d) ", vE.size()); //- returns the current size of the vector

    for (int i = 0; i < 3; i++)
    {
        printf("%d  ", vE[i]);
    }

    vE.pop_back(); //- Pop the last element from the vector.

    printf("\nVector with one value deleted :  size (%d)", vE.size());

    // for (int i = 0; i < 2; i++)
    // {
    //     printf("%d  ", vE[i]);
    // }

    vE.clear();

    printf("\nVector with all values deleted :  size (%d)", vE.size());

    return 0;
}