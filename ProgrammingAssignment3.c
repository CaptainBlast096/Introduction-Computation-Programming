#include <stdio.h>

int main() {
  
  printf("Task 1"\n);
   printf("----------------------------------------------"\n);
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

  
  printf("Task 2"\n);
   printf("----------------------------------------------"\n);
   // Declare variables
    double x1; // x-cord of point 1
    double y1; // y-cord of point 1
    double x2; // x-cord of point 2
    double y2; // y-cord of point 2
    double m; // Slope
    double c; // y-intercept

    // Read Input from user
    puts("Enter the first point (x1,y1):");
    scanf("(%lf,%lf)%*c", &x1, &y1);

    puts("Enter the first point (x2,y2):");
    scanf("(%lf,%lf)%*c", &x2, &y2);

    // Calculate the values of m and c
    m = (y2 - y1) / (x2 - x1);
    c = y1 - m * x1;

    // Print the result
    printf("The slope is %f\n",m);
    printf("The y-intercept is %f\n", c);
    return 0;
}
