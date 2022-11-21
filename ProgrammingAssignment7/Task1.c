#include <stdio.h>
#include <math.h> // Besides, stdio.h, math.h is needed for the functions

int main()
{
    printf("x\tsin(x)\tcos(x)\ttan(x)\texp(x)\tlog(x)\n"); // Column headers
    for (int x = 0; x<6;x++)
    {
        printf("-------\t"); // Break between column header and values
    }
    printf("\n"); // Starts first row below the break
    for (double x = -M_PI; x <= M_PI; x+= (M_PI)/5) // M_PI is the ratio of a circle's circumference to its diameter
    {
        // Body is for equations
        // To the 2nd decimal place
        printf("%.2lf\t", x); // Value
        printf("%.2lf\t", sin(x)); // Sin
        printf("%.2lf\t", cos(x)); // Cosine
        printf("%.2lf\t", tan(x)); // Tangent
        printf("%.2lf\t",exp(x)); // Exponential
        printf("%.2lf\t", log(x)); // Logarithmic
        printf("\n");
    }
    return 0;
}
