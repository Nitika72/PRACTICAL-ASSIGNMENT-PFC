/*
Write a C program to read two matrices and perform matrix addition
using a 2-D array.
*/

#include <stdio.h>

int main()
{
    int r, c;
    int a[10][10], b[10][10], sum[10][10];

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("\nEnter elements of first matrix:\n");
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nEnter elements of second matrix:\n");
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("\nResultant Matrix (Addition):\n");
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
/*OUTPUT
Enter number of rows and columns: 2 2
Enter elements of first matrix:
1
2
3
4
Enter elements of second matrix:
5
6
7
8

Resultant Matrix (Addition):
6 8
10 12
*/