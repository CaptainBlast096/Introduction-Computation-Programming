/**************************************************************************************************
 * Title:               Assignment #2 Task 3-2
 * Author:              Jaleel Rogers
 * Email:               jrogers1239@floridapoly.edu
 * Creation date:       01/27/2022 @ 09:07 PM
 * Modification date:   01/28/2022 @ 12:30 AM
 * Description:         The program will ask the user for the number of courses that the student
 *                      have. The grade are expected out of 100%. The GPA (%) is printed on
 *                      the screen as well as the letter grade.
 **************************************************************************************************/
#include <stdio.h>


int main(int argc, char *argv[])
{
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

    return 0;


}
