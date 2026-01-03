/*
Write a C program to count the number of words in a given string.
*/

#include <stdio.h>

int main()
{
    char str[200];
    int i, words = 0;

    printf("Enter a sentence:\n");
    scanf(" %[^\n]", str);

    for(i = 0; str[i] != '\0'; i++)
    {
        if( (i == 0 && str[i] != ' ') ||
            (str[i] != ' ' && str[i-1] == ' ') )
        {
            words++;
        }
    }

    printf("\nNumber of words = %d\n", words);

    return 0;
}
/*OUTPUT
Enter a sentence:
Hello world this is C programming
Number of words = 6
*/