/*
Write a C program to demonstrate the difference between ++x (pre-increment)
and x++ (post-increment) in an arithmetic expression.
*/

#include <stdio.h>

int main()
{
    int x = 5;
    int pre, post;

    pre = ++x;   // Pre-increment: x is incremented first, then assigned
    printf("After pre-increment (++x):\n");
    printf("Value of x = %d\n", x);
    printf("Value stored in pre = %d\n\n", pre);

    x = 5;       // Reset x

    post = x++;  // Post-increment: value is assigned first, then x is incremented
    printf("After post-increment (x++):\n");
    printf("Value of x = %d\n", x);
    printf("Value stored in post = %d\n", post);

    return 0;
}
/*OUTPUT
After pre-increment (++x):
Value of x = 6
Value stored in pre = 6

After post-increment (x++):
Value of x = 6
Value stored in post = 5
*/