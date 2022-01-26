#include <iostream>
using namespace std;

int main()
{

    int arr1[5] = {5, 3, 1, 6, 3};
    int arr2[10];

    //* Method 1 => Copy contents of one static/dynamic array into another static/dynamic array.

    cout << "static array : \n";

    for (int i = 0; i < 5; i++)
    {
        arr2[i] = arr1[i];
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d\t", arr2[i]);
    }

    int *p = new int[5];
    int *q = new int[10];

    for (int i = 0; i < 5; i++)
    {
        p[i] = (i + 1) * 3;
    }

    //` Another way to copy memory elements memcpy(q, p, 5);

    for (int i = 0; i < 5; i++)
    {
        q[i] = p[i];
    }

    cout << "\n\n";
    cout << "new method array : \n";

    for (int i = 0; i < 10; i++)
    {
        printf("%d\t", q[i]);
    }

    delete[] p;

    //* Method 2 => Point the pointer of the initial array after copying the material, to the address of the new array.

    p = q;
    q = NULL;

    cout << "\n\n";
    cout << "address point change array : \n";

    for (int i = 0; i < 10; i++)
    {
        printf("%d\t", p[i]);
    }

    int *ptrArr1;
    int *ptrArr2;

    ptrArr1 = (int *)malloc(5 * sizeof(int));
    ptrArr2 = (int *)malloc(10 * sizeof(int));

    for (int i = 0; i < 5; i++)
    {
        *(ptrArr1 + i) = (i + 1) * 4;
    }

    for (int i = 0; i < 5; i++)
    {
        *(ptrArr2 + i) = *(ptrArr1 + i);
        //! ptrArr1[i] = ptrArr2[i]; can also be used!!!! 🤯🤯🤯🤯🤯🤯🌌🌌🌌🌌🌌
    }

    free(ptrArr1);
    ptrArr1 = ptrArr2;
    ptrArr2 = NULL;

    cout << "\n\n";
    cout << "malloc array : \n";

    for (int i = 0; i < 10; i++)
    {
        printf("%d\t", *(ptrArr1 + i));
    }

    free(ptrArr1);
    free(ptrArr2);

    return 0;
}
/**
 * static array :
 * 5       3       1       6       3       38      0       4200912 6422124 4199737
 *
 * new method array :
 * 3       6       9       12      15      25718   8981600 8978624 0       0
 *
 * address point change array :
 * 3       6       9       12      15      25718   8981600 8978624 0       0
 *
 * malloc array :
 * 4       8       12      16      20      0       0       0       0       0
 *
 */