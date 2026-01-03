/*
 Write a C program to declare variables of type int, float, char, and double.
   Initialize them with values and print their values and sizes using sizeof operator.
*/

#include <stdio.h>

int main()
{
    int i = 25;
    float f = 3.14f;
    char c = 'A';
    double d = 123.456;

    printf("Integer value = %d\n", i);
    printf("Size of int = %zu bytes\n\n", sizeof(i));

    printf("Float value = %.2f\n", f);
    printf("Size of float = %zu bytes\n\n", sizeof(f));

    printf("Character value = %c\n", c);
    printf("Size of char = %zu bytes\n\n", sizeof(c));

    printf("Double value = %.3lf\n", d);
    printf("Size of double = %zu bytes\n", sizeof(d));

    return 0;
}

/*OUTPUT
Integer value = 25
Size of int = 4 bytes

Float value = 3.14
Size of float = 4 bytes

Character value = A
Size of char = 1 bytes

Double value = 123.456
Size of double = 8 bytes
*/
