/***************************************************************************
 * Title:               Assignment #7 Task 2
 * Author:              Jaleel Rogers
 * Email:               jrogers1239@floridapoly.edu
 * Creation date:       03/29/2022 @ 9:37 PM
 * Modification date:   03/29/2022 @ 10:21 PM
 * Description:         Write a C program with a recursive function called print_digits with one integer parameter
 *                      called number. It separately prints the digits of that number from the most
 *                      significant(left) digit to the least significant(right) digit.
 *                      Test the function with the two numbers 24746 and 58392.
 **************************************************************************/
#include<stdio.h>

void print_digits(int number) // Prints the digits individually | Recursive function
{
    if (number == 0)
    {
        return;
    }
    int x = number % 10;
    number = number / 10;
    print_digits(number);
    printf("%d ", x);
}
int main()
{
    print_digits(24746); // Calling the function
    printf("\n");
    print_digits(58392);
    return 0;
}
