#include <iostream>
using namespace std;

int main()
{
    //* Simple Static Array in C/C++

    int simpleArray[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    printf("Simple Static 2-D array (Stack) : \n");

    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            printf("%d  ", simpleArray[row][col]);
        }

        cout << "\n";
    }

    //* Dynamic Array in C using malloc, pointer in stack and Arrays in heap.

    int *heapArr[3];

    //` *heapArr = (int *)malloc(4 * sizeof(int));
    //` *(heapArr + 1) = (int *)malloc(4 * sizeof(int));
    //` *(heapArr + 2) = (int *)malloc(4 * sizeof(int));

    // for (int i = 0; i < 3; i++)
    // {
    //     printf("%x\t", *(heapArr + i));
    // }

    heapArr[0] = (int *)malloc(4 * sizeof(4));
    heapArr[1] = (int *)malloc(4 * sizeof(4));
    heapArr[2] = (int *)malloc(4 * sizeof(4));

    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            heapArr[row][col] = (col + 1) * 2;
        }
        cout << "\n";
    }

    cout << "Dynamic Array with pointer in stack and data in heap : " << endl;

    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            printf("%d  ", heapArr[row][col]);
        }
        cout << "\n";
    }

    //* Dynamic Array in C using malloc, double pointer in stack and arrays of arrays in heap.

    int **heapArrofArr;

    heapArrofArr = (int **)malloc(3 * sizeof(int));

    heapArrofArr[0] = (int *)malloc(4 * sizeof(4));
    heapArrofArr[1] = (int *)malloc(4 * sizeof(4));
    heapArrofArr[2] = (int *)malloc(4 * sizeof(4));

    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            heapArrofArr[row][col] = (col + 1) * 2;
        }
        cout << "\n";
    }

    cout << "Dynamic Array with double pointer in stack, pointer array and data in heap : " << endl;

    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            printf("%d  ", heapArrofArr[row][col]);
        }
        cout << "\n";
    }

    return 0;
}