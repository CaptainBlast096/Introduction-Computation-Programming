/***************************************************************************
 * Title:               Assignment #2 Task 2
 * Author:              Jaleel Rogers
 * Email:               jrogers1239@floridapoly.edu
 * Creation date:       01/25/2022 @ 09:10 PM
 * Modification date:   01/25/2022 @ 10:00 PM
 * Description:         This program will compare two integers and
 *                      print the result of the comparison on the screen.
 *                      It will us the following relational operations
 *                      <,>, <=, >=.
 **************************************************************************/

#include <stdio.h>

int main(int argc, char *argv[])
{
    int a; //First number
    int b; //Second number

    printf("Enter the first number and second number separated by a , (example 3,5) : ");
    scanf("%d,%d", &a, &b); //Leave a comment  saying what this does

    if (a > b) //Checks if "a" is greater than to "b"
    {
        printf("a is greater than b\n"); //Print the result
    }

    if (a < b) //"a" is less than "b"
    {
        printf("a is less than b\n");
    }

    if (a >= b) //"a" is greater than or equal to "b"
    {
        printf("a is greater than or equal to b\n");
    }

    if (a <= b) //"a" is less than or equal to "b"
    {
        printf("a is less than or equal to b\n");
    }
    return 0; //Informing OS that exit is successful
}
