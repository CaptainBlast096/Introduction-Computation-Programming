#include <stdio.h>

int main(void) {
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

