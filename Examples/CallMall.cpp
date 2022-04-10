#include <iostream>
using namespace std;

int main()
{
    int *arr;

    arr = (int *)calloc(7, sizeof(int));
    arr[0] = 19;
    // arr = (int *)calloc(8, sizeof(int));
    // arr = (int *)malloc(8 * sizeof(int));

    for (int i = 0; i < 7; i++)
    {
        printf("%d \t", arr[i]);
    }

    return 0;
}