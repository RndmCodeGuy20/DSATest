#include <iostream>
using namespace std;

int main()
{
    int *ptr = NULL;
    int **ptr2 = &ptr;

    printf("%u %u", &ptr, &ptr2);

    return 0;
}