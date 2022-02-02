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

int LinearSearch(struct ArrayStatic *Arr, int serEl)
{
    for (int i = 0; i < Arr->Length; i++)
    {
        if (serEl == Arr->A[i])
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    //* Static Abstract Array Program!!!

    struct ArrayStatic Array = {{5, 2, 4, 1, 3}, 10, 5};

    DisplayArrStatic(Array);

    int i = LinearSearch(&Array, 4);

    if (i >= 0)
    {
        printf("\nElement is available at index %d!!!\n", i);
    }
    else
    {
        printf("\nElement not found!!!\n");
    }

    return 0;
}