/**************************************************************************************************
 * Title:               Assignment #6 Task 3
 * Author:              Jaleel Rogers
 * Email:               jrogers1239@floridapoly.edu
 * Creation date:       03/20/2022 @ 10:00 AM
 * Modification date:   03/20/2022 @ 10:40 AM
 * Description:         Write a C program that has two functions called get_double and average.
 *                      The function get_double reads a double value from the user and returns it.
 *                      The function average takes two parameters, the sum, and the number_of_values,
 *                      and it returns the average based on those two parameters. Your program should use the
                        get_double function and the average function to read N double values from the user and
                        then it prints the average of those N values.
 **************************************************************************************************/

#include <stdio.h>
double get_double()
{
    double trouble;
    printf("Enter a double value:");
    scanf("%lf", &trouble);
    return trouble;
}

double average(int sum, int number_of_values) // Assumed that the sum and number of values is an integer
{
    return (double) sum / number_of_values;
}

int main()
{
    int x,n,y,sum = 0;
    printf("Inputted number: %lf\n", get_double());

    printf("Enter total number of values to enter: ");
    scanf("%d", &n);
    printf("Enter %d values:\n", n);

    for (x = 0; x < n;x++)
    {
        scanf("%d", &y);
        sum += y;
    }
    printf ("Average of %d values: %lf", n,average(sum,n)); //Left the decimal place untouched
    return 0;
}

