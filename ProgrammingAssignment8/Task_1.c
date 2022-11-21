/**************************************************************************************************
 * Title:               Assignment #8 Task 1
 * Author:              Jaleel Rogers
 * Email:               jrogers1239@floridapoly.edu
 * Creation date:       04/10/2022 @ 11:42 AM
 * Modification date:   04/13/2022 @ 10:30 AM
 * Description:         Suppose that a company has five employees, and their bi-weekly salaries are: $1,500,
 *                      $3,000, $2,500, $3,300, and $5,000.
                        Write a complete C program with the following specifications:
                        1- Create an array with the employee’s salaries
                        2- Create and use a function to display the salaries on the screen.
                        3- Create and use a function that gives a 5% increase to the 5 employees.
                        4- Displays the salaries before and after the 5% increase.

 **************************************************************************************************/

#include <stdio.h>

void display(int salaries[]) // Displays the salaries of employees

{

    for (int x = 0; x < 5; x++)
    {
        printf("%d ", * (salaries + x));
    }
    printf("\n"); // Keeps each array on its own line

}

void update(int salaries[]) // Updates the salaries

{
    for (int x = 0; x < 5; x++)
    {
        * (salaries + x) += * (salaries + x) * 5 / 100; // Calculation for incrementing/increasing the salary
    }
}

int main()

{
    int salaries[] = {1500, 3000, 2500, 3300, 5000}; // The salary

    printf("\nSalaries: ");

    display(salaries); // Displays the original salary
    update(salaries); // Updated the salary

    printf("Salaries after 5%% increase: "); // Increase the salary

    display(salaries); // Displays the updated salary

}
