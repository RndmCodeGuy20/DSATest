#include <bits/stdc++.h>
using namespace std;

int main()
{
    //$ Vector is a dynamic sized array. Number of elements can be increased or decreased.

    vector<int> vE;           //- Empty vector of integers with garbage values
    vector<int> vZ(10);       //- Vector of size 10 with all elements as 0.
    vector<char> vC(10, 's'); //- Vector of strings with 10 elements all 's'

    printf("Empty vector : %d\n", vE);

    printf("\nEmpty vector of size 10 : ");

    for (int i = 0; i < 10; i++)
    {
        printf("%d  ", vZ[i]);
    }


    printf("\n\nEmpty vector of size 10 with character s : ");

    for (int i = 0; i < 10; i++)
    {
        printf("%c  ", vC[i]);
    }

    return 0;
}