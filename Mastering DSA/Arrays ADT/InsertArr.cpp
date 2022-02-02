#include <iostream>
using namespace std;

struct ArrayStatic
{
    int Array[10];
    int Size;
    int Length;
};

void DisplayArrStatic(struct ArrayStatic Arr)
{
    printf("Elements in the array are : \n");

    for (int i = 0; i < Arr.Length; i++)
    {
        printf("%d  ", Arr.Array[i]);
    }

    cout << "\n\n";
}

void Append(struct ArrayStatic *Arr, int x)
{
    if (Arr->Length < Arr->Size)
    {
        Arr->Array[Arr->Length++] = x;
    }

    //! Since this function will modify the array, it should be of call by address type.
}

void insertAtIndex(struct ArrayStatic *Arr, int index, int x)
{
    if (index >= 0 && index <= Arr->Length)
    {
        for (int i = Arr->Length; i > index; i--)
        {
            Arr->Array[i] = Arr->Array[i - 1];
        }
        Arr->Array[index] = x;
        Arr->Length++;
    }
    else
    {
        perror("Index Out of Bound!!!");
    }

    //! Since this function will modify the array, it should be of call by address type
}

int main()
{
    //* Static Abstract Array Program!!!

    struct ArrayStatic Arr = {{5, 2, 4, 1, 3}, 10, 5};
    int xEnd, xIndex, Index;

    DisplayArrStatic(Arr);

    printf("Enter the element you want to add in the end : ");
    scanf("%d", &xEnd);

    Append(&Arr, xEnd);
    DisplayArrStatic(Arr);

    printf("Enter the index you want to add at: ");
    scanf("%d", &Index);

    printf("Enter the element you want to add : ");
    scanf("%d", &xIndex);

    insertAtIndex(&Arr, Index, xIndex);
    DisplayArrStatic(Arr);

    return 0;
}