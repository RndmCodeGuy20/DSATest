#include <iostream>
using namespace std;

int main()
{
    int *ptr;
    int n;

    cout << "Enter the size of the array : ";
    cin >> n;

    ptr = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        cout << "Enter the value : ";
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("\nValue at %d is : %d ", i, ptr[i]);
    }

    return 0;
}