/**************************************************************************************************
 * Title:               Assignment #2 Task 3-1
 * Author:              Jaleel Rogers
 * Email:               jrogers1239@floridapoly.edu
 * Creation date:       01/25/2022 @ 09:10 PM
 * Modification date:   01/26/2022 @ 9:05 PM
 * Description:         This program will calculates the area for different shapes
 *                      Square, Rectangle, or Triangle. The program will ask the
 *                      user to choose one of three shapes to calculate the area for that shape.
 **************************************************************************************************/

#include <stdio.h>

int main(int argc, char *argv[])
{
    int x,y,b,h,area,choice;

    printf("1-Square \n2-Rectangle \n3-Triangle \n\nPlease choose the shape to calculate area for:");
    scanf("%d", &choice); //Time for user input

    switch(choice)//Switch statement is a selection statement
        // allowing to change the variable being checked
    {
        case 1: //Square
            printf("Enter the side: ");
            scanf("%d", &x); //%d records integer values
            area = x * x;
            printf("The area of the square is: %d", area); //Don't forget to add %d or will not print result
            break;

        case 2: //Rectangle
            printf("Enter the length: ");
            scanf("%d", &x);

            printf("Enter the width: ");
            scanf("%d", &y);
            area = x * y;
            printf("The area of the rectangle is: %d", area);
            break;

        case 3: //Triangle
            printf("Enter the base: ");
            scanf("%d", &b);
            printf("Enter the height: ");
            scanf("%d", &h);
            area = b * h / 2;
            printf("The area of the triangle is: %d", area);
            break;

        default: //If user does not enter any of the available options
            printf("Please enter one of the options.\n");
    }


    return 0; //Informing OS that exit is successful
}
