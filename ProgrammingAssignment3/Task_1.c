#include <stdio.h>

int main() {
    // Declare the variables
    float tf;
    float tc;

    // Read the temperature in Fahrenheit
    puts("Enter the value of temperature in Fahrenheit:");
    scanf("%f", &tf); // Note scanf is limited in determining the precision

    // Convert temperature to Celsius
    tc = (tf - 32) * 5 / 9;

    // Print
    printf("The %.1fF is %.1fC\n", tf, tc);

    return 0;
}
