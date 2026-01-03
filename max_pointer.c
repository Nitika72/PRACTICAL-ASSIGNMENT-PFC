/*
Write a C program to find the maximum of two numbers
using a function that accepts pointer arguments.
*/

#include <stdio.h>

/* Function declaration */
int findMax(int *a, int *b);

int main()
{
    int x, y, max;

    printf("Enter two numbers:\n");
    scanf("%d %d", &x, &y);

    /* Function call passing addresses */
    max = findMax(&x, &y);

    printf("\nMaximum number is: %d\n", max);

    return 0;
}

/* Function definition */
int findMax(int *a, int *b)
{
    if(*a > *b)
        return *a;
    else
        return *b;
}
/*OUTPUT
Enter two numbers:
5 10
Maximum number is: 10
*/