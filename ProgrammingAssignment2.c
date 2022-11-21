
#include <stdio.h>
int main(int argc, char *argv[])
{//Start of main
  
  printf("Task 1"\n);
  printf("--------------------------------------"\n);
    int a; //First number
    int b; //Second number

    printf("Enter the first number and second number separated by a , (example 3,5) : ");
    scanf("%d,%d", &a, &b); //Leave a comment  saying what this does

    if (a == b) //Checks if "a" is equal to "b"
    {
        printf("a is equal to b"); //Print the result
    }

    if (a!=b) //"a" is not equal to "b"
    {
        printf("a is not equal to b");
    }
  
  printf("Task 2"\n);
  printf("--------------------------------------"\n);
    //int a; //First number
    //int b; //Second number

    printf("Enter the first number and second number separated by a , (example 3,5) : ");
    scanf("%d,%d", &a, &b); //Leave a comment  saying what this does

    if (a > b) //Checks if "a" is greater than to "b"
    {
        printf("a is greater than b\n"); //Print the result
    }

    if (a < b) //"a" is less than "b"
    {
        printf("a is less than b\n");
    }

    if (a >= b) //"a" is greater than or equal to "b"
    {
        printf("a is greater than or equal to b\n");
    }

    if (a <= b) //"a" is less than or equal to "b"
    {
        printf("a is less than or equal to b\n");
    }
  
   printf("Task 3.1"\n);
  printf("--------------------------------------"\n);
   int x,y,b,h,area,choice;

    printf("1-Square \n2-Rectangle \n3-Triangle \n\nPlease choose the shape to calculate area for:");
    scanf("%d", &choice); //Time for user input

    switch(choice)//Switch statement is a selection statement
        // allowing to change the variable being checked
    {
        case 1: //Square
            printf("Enter the side: ");
            scanf("%d", &x); //%d records integer values
            area = x * x;
            printf("The area of the square is: %d", area); //Don't forget to add %d or will not print result
            break;

        case 2: //Rectangle
            printf("Enter the length: ");
            scanf("%d", &x);

            printf("Enter the width: ");
            scanf("%d", &y);
            area = x * y;
            printf("The area of the rectangle is: %d", area);
            break;

        case 3: //Triangle
            printf("Enter the base: ");
            scanf("%d", &b);
            printf("Enter the height: ");
            scanf("%d", &h);
            area = b * h / 2;
            printf("The area of the triangle is: %d", area);
            break;

        default: //If user does not enter any of the available options
            printf("Please enter one of the options.\n");
    }

   printf("Task 3.2"\n);
  printf("--------------------------------------"\n);
  int courses; //Number of courses and credit hours
    printf("How many courses are you taking?: ");
    scanf("%d",&courses);

    float grade[courses]; float creditHour[courses]; //Arrays are used to store lists of information
                                                    //Useful for information like exams, grades, etc.
    float sum1=0; float sum2=0;

    for (int i = 0; i<courses; i++)
    {
        printf("\nPlease enter %d grade (number format): ", (i + 1));
        scanf("%f", &grade[i]); //%f is used to hold a float
                                      //i holds
        printf("\nPlease enter course %d credit hour(s): ", (i+1));
        scanf("%f", &creditHour[i]);
        sum1 = sum1 + grade[i] * creditHour[i];
        sum2 = sum2 + creditHour[i];

    }

    float GPA = sum1/sum2; //Calculating the GPA

    char letterGrade;//Find the letter grade
    if (GPA>=90 && GPA<=100)
        letterGrade = 'A';
    else if (GPA>=80 && GPA<=89)
        letterGrade = 'B';
    else if (GPA>=70 && GPA<=79)
        letterGrade = 'C';
    else if (GPA>=60 && GPA<=69)
        letterGrade = 'D';
    else if (GPA<60)
        letterGrade = 'F';

    printf("The GPA is: %.2f", GPA);
    printf("\n The letter grade is: %c", letterGrade);
  
    return 0; //Informing OS that exit is successful
} //End of the main
