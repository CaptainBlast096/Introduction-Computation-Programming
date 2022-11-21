#include <stdio.h>


int main()
{
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

