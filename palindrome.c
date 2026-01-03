/*
Write a C program to read a string and check whether it is a palindrome or not.
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], rev[100];
    int i, len;

    printf("Enter a string: ");
    scanf("%s", str);   // reads a single word

    len = strlen(str);

    for(i = 0; i < len; i++)
    {
        rev[i] = str[len - i - 1];
    }
    rev[len] = '\0';

    if(strcmp(str, rev) == 0)
        printf("The string is a Palindrome.\n");
    else
        printf("The string is not a Palindrome.\n");

    return 0;
}
/*OUTPUT
Enter a string: radar
The string is a Palindrome.
*/