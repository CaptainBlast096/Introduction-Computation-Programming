/***************************************************************************
 * Title:               Assignment #7 Task 3
 * Author:              Jaleel Rogers
 * Email:               jrogers1239@floridapoly.edu
 * Creation date:       03/30/2022 @ 5:49 PM
 * Modification date:   03/30/2022 @ 6:32 PM
 * Description:         Write a C program that has two recursive functions called fact and eval.
 *                      The function fact calculates the factorial of a positive integer.
 *                      The function eval has one double parameter x and one integer N. The function
                        eval evaluates the following expression:
 **************************************************************************/
#include <stdio.h>
#include <math.h>

int fact (int n)
{
    if (n == 0)
        return 1;
    return n * fact(n-1); // Recalls the function again
}

double eval (double x, int N )
{
    if (N ==1)
        return 1.0;
    return pow(x, N-1) / fact(N) + eval(x, N - 1); // Equation
}

int main()
{
    printf("%f\n", eval(2,7)); //Insert value for x and N
    return 0;
}