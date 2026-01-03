/*
Print name NITIKA in star pattern in one line using loops
*/

#include <stdio.h>

int main() {
    int i, j;

    for(i = 0; i < 5; i++) {

        /* N */
        for(j = 0; j < 5; j++)
            printf((j==0 || j==4 || i==j) ? "*" : " ");
        printf("  ");

        /* I */
        for(j = 0; j < 5; j++)
            printf((i==0 || i==4 || j==2) ? "*" : " ");
        printf("  ");

        /* T */
        for(j = 0; j < 5; j++)
            printf((i==0 || j==2) ? "*" : " ");
        printf("  ");

        /* I */
        for(j = 0; j < 5; j++)
            printf((i==0 || i==4 || j==2) ? "*" : " ");
        printf("  ");

        /* K */
        for(j = 0; j < 5; j++)
            printf((j==0 || i+j==4 || i-j==0) ? "*" : " ");
        printf("  ");

        /* A */
        for(j = 0; j < 5; j++)
            printf((j==0 || j==4 || i==0 || i==2) ? "*" : " ");

        printf("\n");
    }

    return 0;
}
/*OUTPUT
*   *  *****  *****  *****  *   *  *****
**  *    *      *      *    ** *   *   *
* * *    *      *      *    * *    *****
*  **    *      *      *    ** *   *   *
*   *  *****    *    *****  *   *  *   *
*/