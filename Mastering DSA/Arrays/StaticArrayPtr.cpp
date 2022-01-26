#include <iostream>
using namespace std;

int main()
{
    //$ In C++ we can assign memory in heap with the use of `new` operator.

    int *ptr;

    ptr = new int[5];
    *ptr = 3;
    *(ptr + 1) = 5;
    // *(ptr + 2) = 2;
    // *(ptr + 3) = 1;
    *(ptr + 4) = 1;

    for (int i = 0; i < 5; i++)
    {
        printf("%d\t", *(ptr + i));
    }

    cout << "\n\n";

    for (int i = 0; i < 5; i++)
    {
        printf("%d\t", ptr[i]);
    }

    //$ In C we can assign memory in heap with the use of `malloc` function.
    cout << "\n\n";

    int *ptrM;

    ptrM = (int *)malloc(5 * sizeof(int));

    *ptrM = 3;
    *(ptrM + 1) = 5;
    *(ptrM + 2) = 2;
    *(ptrM + 3) = 1;
    *(ptrM + 4) = 1;

    for (int i = 0; i < 5; i++)
    {
        printf("%d\t", *(ptrM + i));
    }

    delete[] ptr; //* C++
    free(ptrM);   //* C

    return 0;
}

/**
 * 3       5       0       0       1
 *
 * 3       5       0       0       1
 *
 * 3       5       2       1       1
 *
 */