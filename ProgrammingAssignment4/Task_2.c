/**************************************************************************************************
 * Title:               Assignment #4 Task 2
 * Author:              Jaleel Rogers
 * Email:               jrogers1239@floridapoly.edu
 * Creation date:       02/13/2022 @ 03:18 PM
 * Modification date:   02/15/2022 @ 10:80 PM
 * Description:         The program will  reads the weight and the height, then calculates and
 *                      prints the Body Mass Index (BMI) and the weight categorization.
 **************************************************************************************************/

#include <stdio.h>


int main()
{
    float weight, height, bmi;

    printf("Please type in your weight in pounds:");
    scanf("%f", &weight);

    printf("Please type in your height in inches:");
    scanf("%f", &height);

    bmi = (weight * 703)/(height*height); //Equation for BMI


    if (bmi < 18.5)
    {
        printf("\nBMI is %.1f ( Underweight )\n",bmi);
    }
    else if (bmi >= 18.5 && bmi <= 24.9)
    {
        printf("\nBMI is %.1f ( Normal )\n",bmi);
    }
    else if (bmi >= 25.0 && bmi <= 29.9)
    {
        printf("\nBMI is %.1f ( Overweight )\n",bmi);
    }
    else if (bmi >= 30.0)
    {
        printf("\nBMI is %.1f ( Obese )\n",bmi);
    }



    return 0;
}

