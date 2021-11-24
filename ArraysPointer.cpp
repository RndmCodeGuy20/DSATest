#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3};

    // printf("%d", arr); // Prints address of first element of array

    printf("%d ", arr);
    printf("%d ", arr + 1);
    printf("%d ", arr + 2);

    int *ptrarr = arr;

    printf("\npointer address : %d\n", ptrarr);

    for (int i = 0; i < 3; i++)
    {
        printf("%d ", ptrarr);
        ptrarr++;
    }

    return 0;
}