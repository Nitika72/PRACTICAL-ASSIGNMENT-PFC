/*
Problem Statement: Salary Calculation System

A company wants to automate its employee salary calculation process using a C program.
The program takes the following inputs:
- Employee Name
- Basic Salary

It calculates:
1. HRA = 20% of Basic Salary
2. DA  = 10% of Basic Salary
3. Gross Salary = Basic + HRA + DA
4. Income Tax = 5% of Gross Salary
5. Net Salary = Gross Salary - Income Tax
*/

#include <stdio.h>

int main()
{
    char name[50];
    float basic, hra, da, gross, tax, net;

    printf("Enter Employee Name: ");
    scanf(" %[^\n]", name);   // reads full name including spaces

    printf("Enter Basic Salary: ");
    scanf("%f", &basic);

    hra = 0.20 * basic;
    da  = 0.10 * basic;
    gross = basic + hra + da;
    tax = 0.05 * gross;
    net = gross - tax;

    printf("\n----- Salary Details -----\n");
    printf("Employee Name   : %s\n", name);
    printf("Basic Salary    : %.2f\n", basic);
    printf("HRA (20%%)       : %.2f\n", hra);
    printf("DA (10%%)        : %.2f\n", da);
    printf("Gross Salary    : %.2f\n", gross);
    printf("Income Tax (5%%) : %.2f\n", tax);
    printf("Net Salary      : %.2f\n", net);

    return 0;
}
/*OUTPUT
Enter Employee Name: John Doe
Enter Basic Salary: 50000

----- Salary Details -----
Employee Name   : John Doe
Basic Salary    : 50000.00
HRA (20%)       : 10000.00
DA (10%)        : 5000.00
Gross Salary    : 65000.00
Income Tax (5%) : 3250.00
Net Salary      : 61750.00
*/