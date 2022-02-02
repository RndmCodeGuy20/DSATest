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
    printf("\nElements in the array are : \n");

    for (int i = 0; i < Arr.Length; i++)
    {
        printf("%d  ", Arr.A[i]);
    }
}

void delEl(struct ArrayStatic *Arr, int index){

    for(int i = index; i < Arr->Length; i++){
        Arr->A[i] = Arr->A[i+1];
    }
    Arr->Length--;
}

int main()
{
    //* Static Abstract Array Program!!!

    struct ArrayStatic Array = {{5, 2, 4, 1, 3}, 10, 5};

    DisplayArrStatic(Array);

    delEl(&Array, 1);

    DisplayArrStatic(Array);

    return 0;
}