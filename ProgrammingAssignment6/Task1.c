/**************************************************************************************************
 * Title:               Assignment #6 Task 1
 * Author:              Jaleel Rogers
 * Email:               jrogers1239@floridapoly.edu
 * Creation date:       03/19/2022 @ 10:23 AM
 * Modification date:   03/19/2022 @ 10:27 AM
 * Description:         Write a C program that has a function called print_hello that prints the message "Hello".
 *                      Call the print_hello function four times from the main.
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

