#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int num1, num2, rez;

    printf("Enter two number : ");
    scanf("%d %d", &num1, &num2);

    rez = num1 + num2;

    printf("Sum of %d and %d is : %d", num1, num2, rez);

    return 0;
}