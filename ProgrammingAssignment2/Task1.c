/***************************************************************************
 * Title:               Assignment #2 Task 1
 * Author:              Jaleel Rogers
 * Email:               jrogers1239@floridapoly.edu
 * Creation date:       01/25/2022 @ 08:30 PM
 * Modification date:   01/25/2022 @ 12:40 PM
 * Description:         This program will compare two integers and
 *                      print the result of the comparison on the screen
 **************************************************************************/
#include <stdio.h>
int main(int argc, char *argv[])
{//Start of main
    int a; //First number
    int b; //Second number

    printf("Enter the first number and second number separated by a , (example 3,5) : ");
    scanf("%d,%d", &a, &b); //Leave a comment  saying what this does

    if (a == b) //Checks if "a" is equal to "b"
    {
        printf("a is equal to b"); //Print the result
    }

    if (a!=b) //"a" is not equal to "b"
    {
        printf("a is not equal to b");
    }
    return 0; //Informing OS that exit is successful
} //En of the main
