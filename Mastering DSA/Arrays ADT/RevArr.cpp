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

void RevArray(struct ArrayStatic *Arr)
{
    int *ArrB;
    ArrB = (int *)malloc(Arr->Length * sizeof(int));

    for (int j = 0, i = (Arr->Length - 1); i >= 0; j++, i--)
    {
        ArrB[j] = Arr->A[i];
    }

    for (int i = 0; i < Arr->Length; i++)
    {
        Arr->A[i] = ArrB[i];
    }

    printf("\nReversed Array : \n");

    for (int i = 0; i < Arr->Length; i++)
    {
        printf("%d  ", Arr->A[i]);
    }

    free(ArrB);
}

void RevArraySwap(struct ArrayStatic *Arr)
{
    int temp;

    for (int i = 0, j = (Arr->Length - 1); i < j; i++, j--)
    {
        temp = Arr->A[i];
        Arr->A[i] = Arr->A[j];
        Arr->A[j] = temp;
    }

    printf("\nReversed Array : \n");

    for (int i = 0; i < Arr->Length; i++)
    {
        printf("%d  ", Arr->A[i]);
    }
}

int main()
{
    //* Static Abstract Array Program!!!

    struct ArrayStatic Array = {{5, 2, 4, 1, 3}, 10, 5};

    DisplayArrStatic(Array);

    RevArray(&Array);
    RevArraySwap(&Array);

    return 0;
}