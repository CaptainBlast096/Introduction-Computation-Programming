/**************************************************************************************************
 * Title:               Assignment #5 Task 2
 * Author:              Jaleel Rogers
 * Email:               jrogers1239@floridapoly.edu
 * Creation date:       02/23/2022 @ 10:49 PM
 * Modification date:   02/24/2922 @ 10:46 PM
 * Description:         This program will, input two positive integers n1 and n2, with proper prompt
 *                      in order to use for loop to find out the greatest common divisor (GCD)
 *                      of the two input integers n1 and n2.
 *
 *                      #include <stdio.h>

 **************************************************************************************************/
#include <stdio.h>
int main()
{

    int n1, n2,gcd, d;

    puts("Type first positive number:");
    scanf("%d", &n1);

    puts("Type second positive number:");
    scanf("%d", &n2);

    // d acts like i and is an empty value
    for(d = 1; d <= n1 && d <= n2; ++d)
    {
        // Sees if d is a common factor on both n1 and n2
        if (n1%d==0 && n2%d==0)
        {
            gcd = d;
        }

/****
        else
        {
            printf("no GCD\n"); // Keeps repeating "no GCD"
        }
****/
    }

    printf("GCF is %d", gcd);

    return 0;
}