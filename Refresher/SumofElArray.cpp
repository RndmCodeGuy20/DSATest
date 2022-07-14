#include <iostream>
using namespace std;

int recSum(int A[], int n)
{
    if (n == 0)
    {
        return A[0];
    }
    else
    {
        return recSum(A, n - 1) + A[n];
    }
}

int main()
{
    int A[10] = {
        3,
        1,
        5,
        2,
        6,
        5,
        7,
        7,
        9,
        2};

    cout << recSum(A, 9) << endl;

    return 0;
}