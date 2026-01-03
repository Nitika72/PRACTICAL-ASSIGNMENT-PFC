/*
W32rite a C program to input two integers and perform addition, subtraction,
multiplication, division, and modulus. Display the results.
*/

#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter two integers:\n");
    scanf("%d %d", &a, &b);

    printf("\nAddition = %d\n", a + b);
    printf("Subtraction = %d\n", a - b);
    printf("Multiplication = %d\n", a * b);

    if(b != 0)
    {
        printf("Division = %d\n", a / b);
        printf("Modulus = %d\n", a % b);
    }
    else
    {
        printf("Division and Modulus are not possible because second number is 0\n");
    }

    return 0;
}
/*OUTPUT
Enter two integers:
23
45

Addition = 68
Subtraction = -22
Multiplication = 1035
Division = 0
Modulus = 23
*/