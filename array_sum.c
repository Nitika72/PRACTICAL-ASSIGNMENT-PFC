/*
Write a C program to read n elements into an integer array
and calculate the sum and average of the elements.
*/

#include <stdio.h>

int main()
{
    int n, sum = 0;
    float avg;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    avg = (float)sum / n;

    printf("\nSum of elements = %d\n", sum);
    printf("Average of elements = %.2f\n", avg);

    return 0;
}
/*OUTPUT
Enter number of elements: 5
Enter 5 elements:
10
20
30
40
50
Sum of elements = 150
Average of elements = 30.00
*/