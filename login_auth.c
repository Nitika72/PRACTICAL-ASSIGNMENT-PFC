/*
Problem Statement: Login Authentication System

The program:
- Stores a predefined username and password.
- Takes username and password as input from the user.
- Uses logical operators (&&, ||, !) to validate login.
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char correctUser[] = "admin";
    char correctPass[] = "1234";

    char user[20], pass[20];

    printf("Enter Username: ");
    scanf("%s", user);

    printf("Enter Password: ");
    scanf("%s", pass);

    if(strcmp(user, correctUser) == 0 && strcmp(pass, correctPass) == 0)
    {
        printf("\nLogin Successful.\n");
    }
    else
    {
        printf("\nInvalid Login.\n");
    }

    return 0;
}
/*OUTPUT
Enter Username: admin
Enter Password: 1234
Login Successful.
*/