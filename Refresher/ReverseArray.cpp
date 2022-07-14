#include <iostream>
using namespace std;

int main()
{
    int A[] = {2, 4, 9, 3, 1, 6, 5};

    int n = (sizeof(A) / sizeof(A[0])) - 1;

    for (int i = 0, j = n; i <= n / 2, j > n / 2; i++, j--)
    {
        // printf("i : %d     j : %d\n", i, j);
        int temp = A[i];
        A[i] = A[j];
        A[j] = temp;
    }

    for (int i = 0; i <= n; i++)
    {
        printf("%d  ", A[i]);
    }
    

    return 0;
}