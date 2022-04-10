#include <iostream>
using namespace std;

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)

        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
}

int main()
{
    int n, el, e = 0, o = 0;
    cin >> n;

    int evenArr[n];
    int oddArr[n];

    cout << "Enter the elements : " << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> el;

        if (el % 2 == 0)
        {
            evenArr[e] = el;
            e++;
        }
        if (el % 2 != 0)
        {
            oddArr[o] = el;
            o++;
        }
    }

    bubbleSort(evenArr, n);
    bubbleSort(oddArr, n);

    printf("\nSorted Even Array : ");

    for (int i = 0; i < e; i++)
    {
        printf("%d ", evenArr[i]);
    }

    printf("\nSorted Odd Array : ");

    for (int i = 0; i < o; i++)
    {
        printf("%d ", oddArr[i]);
    }

    return 0;
}