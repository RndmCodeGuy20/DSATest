#include <iostream>
using namespace std;

int main()
{
    int i = 3;

    printf("value at i = %d\n", i);
    printf("address of i = %d\n", &i);

    int *j;
    j = &i;

    printf("value of i = %d\n", *j); // *j is the same as *(&i)
    printf("value (address of i) of j = %d\n", j);
    printf("address of j = %d\n", &j);
    printf("address of i (value of j) = %d\n", *&j);
    printf("value at j = %d\n", *j);

    return 0;
}