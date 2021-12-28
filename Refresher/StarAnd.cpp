#include <iostream>
using namespace std;

int main()
{
    int a = 34;
    char c = 'S';

    int *ptr = &a;
    char *cptr = &c;
    int *ptr2 = ptr + 1;

    printf("address of a = %p\n", ptr);
    printf("address of c = %p\n", ptr2);

    return 0;
}