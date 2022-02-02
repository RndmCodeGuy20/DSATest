#include <iostream>
using namespace std;

struct ArrayStatic
{
    int A[20];
    int Size;
    int Length;
};

void DisplayArrStatic(struct ArrayStatic Arr)
{
    printf("Elements in the array are : \n");

    for (int i = 0; i < Arr.Length; i++)
    {
        printf("%d  ", Arr.A[i]);
    }
}

int BinSearchIter(struct ArrayStatic Arr, int serEl)
{
    int low, mid, high;

    low = 0;
    high = Arr.Length - 1;
    mid = (low + high) / 2;

    while (low <= high)
    {
        if (Arr.A[mid] == serEl)
        {
            return mid;
        }
        else if (Arr.A[mid] > serEl)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    return 0;
}

int main()
{
    //* Static Abstract Array Program!!!

    struct ArrayStatic Array = {{5, 2, 4, 1, 3}, 10, 5};

    DisplayArrStatic(Array);

    int i = BinSearchIter(Array, 8);

    if (i != 0)
    {
        printf("\nElement present at index %d", i);
    }
    else
    {
        printf("\nElement not found!");
    }

    return 0;
}