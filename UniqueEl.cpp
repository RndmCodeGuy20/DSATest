#include <iostream>
using namespace std;

int main()
{
    int arr[15] = {3, 5, 1, 6, 3, 8, 9, 12, 4, 10, 3, 1, 2, 10, 3};

    for (int i = 0; i < 15; i++)
    {
        int j;
        for (j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
            {
                break;
            }
        }
        
        if (i == j)
        {
            cout << arr[i] << " ";
        }
    }

    return 0;
}