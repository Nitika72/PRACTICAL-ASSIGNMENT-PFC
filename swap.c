/*
Write a C program that uses a user-defined function to swap two numbers
using call by reference.
*/

#include <stdio.h>

/* Function declaration */
void swap(int *a, int *b);

int main()
{
    int x, y;

    printf("Enter two numbers:\n");
    scanf("%d %d", &x, &y);

    printf("\nBefore Swapping:\n");
    printf("x = %d, y = %d\n", x, y);

    /* Function call using addresses */
    swap(&x, &y);

    printf("\nAfter Swapping:\n");
    printf("x = %d, y = %d\n", x, y);

    return 0;
}

/* Function definition */
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
/*OUTPUT
Enter two numbers:
5 10
Before Swapping:
x = 5, y = 10
After Swapping:
x = 10, y = 5
*/