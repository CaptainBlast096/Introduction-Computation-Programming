/**************************************************************************************************
 * Title:               Assignment #8 Task 2
 * Author:              Jaleel Rogers
 * Email:               jrogers1239@floridapoly.edu
 * Creation date:       04/10/2022 @ 12:20 PM
 * Modification date:   04/15/2022 @ 10:20 AM
 * Description:         Write a C program that will take ten real numbers from the user and store them in an array.
 *                      After that, the program will calculate the following:
                        1. The sum of the numbers.
                        2. The mean.
                        3. The minimum value.
                        4. The maximum value.
                        5. The number of zero values.
                        6. The median.
                        7. The mode.
 **************************************************************************************************/


#include <stdio.h>
int main(void)
{
   float array [10], sum = 0, minimum = 0, maximum = 0;
   float mode = 0, maxC = 0;
   int zero = 0; // Set values equal to zero

   printf("Enter 10 numbers: ");

   for (int x = 0; x <10; x++)
   {
       // Inputting the 10 numbers
       scanf("%f", &array[x]);

       // 1. The Sum
       sum = sum + array[x];

       // 3. The Minimum
       if (x == 0 || array[x] < minimum)
       {
           minimum = array[x];
       }

       // 4. The Maximum
       if( x == 0 || array[x] > maximum)
       {
           maximum = array[x];
       }

        // 5. The number of zero values
       if (array [x] == 0)
       {
           zero = zero + 1;
       }
   }

   // 2. The Mean
   float mean = sum / (float) 10;

   // 6. The Median
   for (int x = 0; x < 10; x++)
   {
       int count = 0;

       for (int y = x + 1; y < 10; y++)
       {
           if (array[y] == array [x])
           {
               ++count;
           }

       if (count > maxC)
       {
           maxC = count;
           mode = array[x];
       }
   }
}

    float median = (array[4] + array[5]) / (float)2;

    // 7. Mode
   for (int x = 0; x < 10; x++)
   {
        int count = 0;

        for (int y = 0; y < 10; y++)
        {
            if (array[y] == array[x])
                ++count;
        }
   }

    // The results
    printf("\n The Sum of the number: %f", sum);
    printf("\n The Mean: %f", mean);
    printf("\n The Minimum value: %f", minimum);
    printf("\n The Maximum value: %f", maximum);
    printf("\n The Number of zeroes: %d", zero );
    printf("\n The Median: %f", median);
    printf("\n The Mode: %f", mode);

    return 0;
}