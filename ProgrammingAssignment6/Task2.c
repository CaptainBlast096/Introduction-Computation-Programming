/**************************************************************************************************
 * Title:               Assignment #6 Task 2
 * Author:              Jaleel Rogers
 * Email:               jrogers1239@floridapoly.edu
 * Creation date:       03/19/2022 @ 10:28 AM
 * Modification date:   03/19/2022 @ 11:18 AM
 * Description:         Write a C program that has a function called print_rectangle that takes two integer
 *                      parameters length and width. The print_rectangle will print a rectangle with the given
 *                      parameters on the screen using asterisks(*). Your program should ask the user to enter the
 *                      length and width. Finally, your program will call the print_rectangle with the
 *                      entered values of the length and width.
 **************************************************************************************************/

#include <stdio.h>
void print_rectangle(int length, int width) // Void is used to indicate a return type, point is universal
{
    int l,w;
    for (l = 0; l < length; l++)
    {
        for (w = 0; w < width; w++)
            printf("*");
            printf("\n");
    }

}
int main()
{
    int length, width;
    printf("Enter the length:");
    scanf("%d", &length);

    printf("Enter the width:");
    scanf("%d", &width);
    print_rectangle(length, width); // Output
    return 0;
}

