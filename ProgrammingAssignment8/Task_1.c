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
