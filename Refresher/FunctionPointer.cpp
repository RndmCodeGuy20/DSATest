#include <iostream>
using namespace std;

int main()
{
    int *fun();
    int *p;
    p = fun();

    printf("address of i %u", p);
    printf("\nvalue of i %u", *p);

    return 0;
}

int* fun()
{
    static int i = 20;
    return (&i+1);
}