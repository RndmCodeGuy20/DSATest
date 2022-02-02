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

void GetEL(struct ArrayStatic Arr, int index)
{
    if (index <= Arr.Length && index >= 0)
    {
        printf("\nElement at index %d is : %d", index, Arr.A[index]);
    }
    else
    {
        perror("\nInvalid Index!!!");
    }
}

void SetEl(struct ArrayStatic *Arr, int index, int El)
{
    if (index <= Arr->Length && index >= 0)
    {
        Arr->A[index] = El;
    }
    else
    {
        perror("\nInvalid Index!!!");
    }
}

void MaxEl(struct ArrayStatic Arr)
{
    int maxEl = Arr.A[0];

    for (int i = 1; i < Arr.Length; i++)
    {
        if (Arr.A[i] >= maxEl)
        {
            maxEl = Arr.A[i];
        }
    }

    printf("\nMaximum element in Array is %d\n", maxEl);
}

void MinEl(struct ArrayStatic Arr)
{
    int minEl = Arr.A[0];

    for (int i = 0; i < Arr.Length; i++)
    {
        if (Arr.A[i] < minEl)
        {
            minEl = Arr.A[i];
        }
    }

    printf("\nMinimum element in array is : %d\n", minEl);
}

void SumAvg(struct ArrayStatic Array)
{
    int sum = 0;

    for (int i = 0; i < Array.Length; i++)
    {
        sum += Array.A[i];
    }

    printf("\nSum of elements in array : %d\nAverage of elements in array : %d\n", sum, sum / Array.Length);
}

void SortArray(struct ArrayStatic *Array)
{
    int temp;

    for (int i = 0; i < Array->Length - 1; i++)
    {
        for (int j = 0; j < Array->Length - i - 1; j++)
        {
            if (Array->A[j] > Array->A[j + 1])
            {
                temp = Array->A[j];
                Array->A[j] = Array->A[j + 1];
                Array->A[j + 1] = temp;
            }
        }
    }

    printf("\nElements in the sorted array are : \n");

    for (int i = 0; i < Array->Length; i++)
    {
        printf("%d  ", Array->A[i]);
    }
}

int main()
{
    //* Static Abstract Array Program!!!

    struct ArrayStatic Array = {{234, 32, 63, 112, 345}, 10, 5};

    DisplayArrStatic(Array);

    SortArray(&Array);

    SumAvg(Array);

    GetEL(Array, 3);

    SetEl(&Array, 2, 999);

    cout << "\n";

    DisplayArrStatic(Array);

    MaxEl(Array);

    MinEl(Array);

    return 0;
}