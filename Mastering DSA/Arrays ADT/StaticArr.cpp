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

int main()
{
    //* Static Abstract Array Program!!!

    struct ArrayStatic Arr2 = {{5, 2, 4, 1, 3}, 10, 5};

    DisplayArrStatic(Arr2);

    return 0;
}