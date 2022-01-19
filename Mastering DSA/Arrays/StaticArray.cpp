#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {2, 3, 4, 5, 6};

    for (int i = 0; i < 5; i++)
    {
        printf("%u\t", (arr + i));
    }

    cout << endl;
    
    for (int i = 0; i < 5; i++)
    {
        printf("   %d\t", i[arr]);
    }

    return 0;
}