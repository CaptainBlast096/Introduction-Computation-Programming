/**************************************************************************************************
 * Title:               Assignment #6 Task 4
 * Author:              Jaleel Rogers
 * Email:               jrogers1239@floridapoly.edu
 * Creation date:       03/20/2022 @ 11:30 AM
 * Modification date:   03/20/2022 @ 11:50 AM
 * Description:         Write a C program that has a function called is_perfect_square.
 *                      The is_perfect_square function has only one integer parameter, x.
 *                      The function returns 1(one) if x is a perfect square. Otherwise, it returns 0 (zero).
                        Your program should use the is_perfect_square function, check if each of the
                        numbers from 2 to 50 is a perfect square, print each of these numbers,
                        and whether it is a perfect square or not.
 ***************************************************************************************************/
#include <stdio.h>
#include <math.h> // Perfect square involves the math.h

is_perfect_square(int x)
{
 int sq = sqrt(x);
 return(sq * sq == x); // Comparison of the perfect square
}

int main()
{
 int y;
 for (y = 2; y <= 50; y++) // Between 2 & 50
     printf("%d is a perfect square of %d\n", y, is_perfect_square(y)); // Call the function
    return 0;
}
