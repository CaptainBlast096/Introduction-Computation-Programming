/***************************************************************************
 * Title:               Assignment #9 Task 1
 * Author:              Jaleel Rogers
 * Email:               jrogers1239@floridapoly.edu
 * Creation date:       04/24/2022 @ 11:54 AM
 * Modification date:   01/25/2022 @ 1:15 PM
 * Description:         Write a C program that reads a string up to 1024 characters and uses a function called
 *                      text_statistics to calculate statistics on the passed string.
 *                      The function text_statistics has a string parameter and displays the number of digit
 *                      characters in the string, the number of words in the string, the number of words that start
                        with a lowercase letter, and the number of words that begin with an uppercase letter.
 **************************************************************************/
#include <stdio.h>


void text_statistics (char str[])
        {
            // Need to have a variable to store each statistic

        int num_Digits = 0;
        int num_Words = 0;
        int num_Lower = 0;
        int num_Upper = 0;

        for (int i = 0; str[i]!= '\0'; i++) // For loop combs through the string checking digits from ASCII table
        {
            printf("%c", str[i]);

            if (str[i] >= 48 && str[i] <= 57)
            {
                num_Digits++;
            }
            if (str[i] == ' ' && str[i + 1] != ' ') // If there is a space in the string it will increment
            {
                num_Words++;
            }


            if (i == 0)
            {
                if (str[i] >= 65 && str[i] <= 90) // ASCII for lowercase
                {
                    num_Upper++;
                }
                    else if(str[i] >= 97 && str[i] <= 122) // ASCII for uppercase
                    {
                        num_Lower++;
                    }
            }
                else if (i > 0 && str[i - 1] == ' ') // If there was a space in between the words
                {
                    if (str[i] >= 65 && str[i] <= 90)
                    {
                        num_Upper++;
                    }

                        else if (str[i] >= 97 && str[i] <= 122)
                        {
                            num_Lower++;
                        }
                }
        }


        printf("\n Number of digits: %d", num_Digits);
        printf("\n Number of words: %d", num_Words);
        printf("\n Number of uppercase characters: %d", num_Upper);
        printf("\n Number of lowercase characters: %d", num_Lower);
        }

int main()
{
    // string length
    char str[1024];

    //User_inputted string
    printf("Enter string of up to 1024 characters: ");

    gets(str);
    text_statistics(str);

    return 0;
}
