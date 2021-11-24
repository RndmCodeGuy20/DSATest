#include <iostream>
using namespace std;

void swap(int *i, int *j)
{
    int temp = *i;
    *i = *j;
    *j = temp;
}

int main()
{
    int a = 10, b = 20;

    cout << "Before Swapping : \n"
         << "a = " << a << "\n"
         << "b = " << b << endl;

    swap(&a, &b);

    cout << "After Swapping : \n"
         << "a = " << a << "\n"
         << "b = " << b << endl;

    return 0;
}
