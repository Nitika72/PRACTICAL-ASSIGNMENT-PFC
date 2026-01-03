/*
Problem Statement: Comparing Two Numbers Without Conditional Statements

A bank’s internal tool needs to find out which of two account balances is higher,
but the program cannot use any conditional statements.

The program:
- Takes two account balances as input (float).
- Uses relational and logical operators to determine:
  1. Whether both balances are equal.
  2. Whether the first balance is greater than the second.
  3. Whether the second balance is greater than the first.
- Displays results as 1 (True) or 0 (False).
*/

#include <stdio.h>

int main()
{
    float acc1, acc2;

    printf("Enter first account balance: ");
    scanf("%f", &acc1);

    printf("Enter second account balance: ");
    scanf("%f", &acc2);

    printf("\nComparison Results:\n");
    printf("Both balances are equal        : %d\n", acc1 == acc2);
    printf("First balance > Second balance: %d\n", acc1 > acc2);
    printf("Second balance > First balance: %d\n", acc2 > acc1);

    return 0;
}
/*OUTPUT
Enter first account balance: 1500.75
Enter second account balance: 2000.50
Comparison Results:
Both balances are equal        : 0
First balance > Second balance: 0
Second balance > First balance: 1
*/