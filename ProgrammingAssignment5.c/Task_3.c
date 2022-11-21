/**************************************************************************************************
 * Title:               Assignment #5 Task 3
 * Author:              Jaleel Rogers
 * Email:               jrogers1239@floridapoly.edu
 * Creation date:       02/24/2022 @ 10:46 PM
 * Modification date:   02/25/2022 @ 12:53 AM
 * Description:         This program will have a switch, while, and do...while statement to
 *                      continuously read an integer from the user and display the name of
 *                      every digit of the number from right to left. The program will
 *                      exit when a negative or zero integer is entered.
 **************************************************************************************************/
#include <stdio.h>


int main()
{

    while (1)
    {
        int number, remainder;
        printf("Enter number: ");
        scanf("%d", &number);

        if (number == 0 || number < 0)
            // Program will stop if the number is 0 or negative
            return 0;

        do
        {
            remainder = number % 10;
            // Calculates remainder
            number = number / 10;
            // Divide number by 10

            switch (remainder) // Have numbers 1-9 be its own case
            {
            case 1:
                printf("One "); // The case can be a number while output a string in order to set up conversion
                break;
            case 2:
                printf("Two ");
                break;
            case 3:
                printf("Three ");
                break;
            case 4:
                printf("Four ");
                break;
            case 5:
                printf("Five ");
                break;
            case 6:
                printf("Six ");
                break;
            case 7:
                printf("Seven ");
                break;
            case 8:
                printf("Eight ");
                break;
            case 9:
                printf("Nine ");
                break;
            }
        }
        while(number != 0);
        puts("\n");
        return 0;
    }
}
