#include <stdio.h>


int main()
{
  printf("Task 1"\n);
  prinf("-----------------------------------"\n);
    int num1,num2, lcm, statement = 1;

   printf("Type in your first positive integer:");
   scanf("%d", &num1);
   printf("Type in your second positive integer:");
    scanf("%d", &num2);

    lcm = (num1 > num2) ? num1 : num2; //Ternary statement
                                       //Takes three operands
                                       //Reduces the if statement down to a single line and easier to read
    while(statement)
    {
        if(lcm % num1 == 0 && lcm % num2 == 0) //Comparing that number 1 and 2 are both at 0
        {
            printf("\nThe LCM of %d and %d is %d\n", num1, num2, lcm);
            statement = 0; // If statement is not 1, the loop will end
        }
        lcm++; // Value is incremented by 1 with each iteration
    }

  printf("Task 2"\n);
  prinf("-----------------------------------"\n);
  
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

printf("Task 3"\n);
  prinf("-----------------------------------"\n);
  
  int num1,num2, lcm, statement = 1;

   printf("Type in your first positive integer:");
   scanf("%d", &num1);
   printf("Type in your second positive integer:");
    scanf("%d", &num2);

    lcm = (num1 > num2) ? num1 : num2; //Ternary statement
                                       //Takes three operands
                                       //Reduces the if statement down to a single line and easier to read
    while(statement)
    {
        if(lcm % num1 == 0 && lcm % num2 == 0) //Comparing that number 1 and 2 are both at 0
        {
            printf("\nThe LCM of %d and %d is %d\n", num1, num2, lcm);
            statement = 0; // If statement is not 1, the loop will end
        }
        lcm++; // Value is incremented by 1 with each iteration
    }
    return 0;
}


