/*
Problem Statement: Bank Interest Update System

The program:
1. Takes initial account balance as input.
2. Adds interest using +=
3. Deducts maintenance charge using -=
4. Applies bonus factor using *=
5. Divides balance between two accounts using /=
6. Displays balance after each operation.
*/

#include <stdio.h>

int main()
{
    float balance, interest, charge, bonus;

    printf("Enter initial account balance: ");
    scanf("%f", &balance);

    printf("Enter interest amount to add: ");
    scanf("%f", &interest);
    balance += interest;
    printf("Balance after adding interest: %.2f\n", balance);

    printf("Enter annual maintenance charge to deduct: ");
    scanf("%f", &charge);
    balance -= charge;
    printf("Balance after deducting charge: %.2f\n", balance);

    printf("Enter bonus factor (e.g., 1.10 for 10%% bonus): ");
    scanf("%f", &bonus);
    balance *= bonus;
    printf("Balance after applying bonus factor: %.2f\n", balance);

    balance /= 2;
    printf("Balance after dividing equally between two linked accounts: %.2f\n", balance);

    return 0;
}
/*OUTPUT
Enter initial account balance: 1000
Enter interest amount to add: 50
Balance after adding interest: 1050.00
Enter annual maintenance charge to deduct: 20
Balance after deducting charge: 1030.00
Enter bonus factor (e.g., 1.10 for 10% bonus): 1.10
Balance after applying bonus factor: 1133.00
Balance after dividing equally between two linked accounts: 566.50
*/