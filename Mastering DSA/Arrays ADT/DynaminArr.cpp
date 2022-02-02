#include <iostream>
using namespace std;

struct ArrayDynamic
{
    int *BaseAddr;
    int Size;
    int Length;
};

void DisplayArrDynamic(struct ArrayDynamic Arr)
{
    printf("Elements in the array are : \n");

    for (int i = 0; i < Arr.Length; i++)
    {
        printf("%d  ", Arr.BaseAddr[i]);
    }
}

int main()
{
    //* Dynamic Abstract Array Program!!!

    struct ArrayDynamic Arr;

    printf("Enter the size of the Array : ");
    scanf("%d", &Arr.Size);

    Arr.BaseAddr = (int *)malloc(Arr.Size * sizeof(int));

    printf("Enter the number of elements in the Array : ");
    scanf("%d", &Arr.Length);

    /**
     * @brief Memory representation of a structure.
     *
     * ` Structure : | BaseAddress | Size  | Length  | -> initialised in stack memory
     * ` +----------------------------+
     * ` |  12   |  13  |  10  |  5   |         HEAP MEMORY LOCATIONS
     * ` +----------------------------+
     * ` |  200  |  204 |  208 | 216  |
     * ` +----------------------------+
     * `     ⬆️
     * ` +---------+
     * ` |   200   |        BaseAddress variable in stack memory containing the address of heap memory location.
     * ` +---------+
     * ` |  2000   |
     * ` +---------+
     *
     * - BaseAddress[i] acts an array since it has memory location of a contiguous memory block situated in the heap.
     *
     * - BaseAddress[0] = 200
     * - BaseAddress[1] = 204
     * - BaseAddress[2] = 208
     * - BaseAddress[3] = 216
     * ! Goto line 17
     */

    printf("Enter the elements into the array : \n");

    for (int i = 0; i < Arr.Length; i++)
    {
        scanf("%d", &Arr.BaseAddr[i]);
    }

    DisplayArrDynamic(Arr);

    return 0;
}