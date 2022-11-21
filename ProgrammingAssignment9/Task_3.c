/**************************************************************************************************
 * Title:               Assignment #8 Task 3
 * Author:              Jaleel Rogers
 * Email:               jrogers1239@floridapoly.edu
 * Creation date:       04/10/2022 @ 2:00 PM
 * Modification date:   04/15/2022 @ 10:42 AM
 * Description:         Write a C program that will generate an array of 100 random double numbers from 0 to 20.
 *                      Write a function that will sort the array and then perform a binary search on the array
 *                      to find a user’s search key.
 **************************************************************************************************/

#include <stdio.h>
#include<stdlib.h>
#include<time.h>

void sort(int array[],int n)
{
    int x, y, temp;
    for (x = 0; x < n - 1; ++x)
    {
        for (y = 0; y < n - 1 - x; ++y)

        {
            if (array[y] > array[y + 1])

            {
                temp = array[y + 1];
                array[y + 1] = array[y];
                array[y] = temp;

            }

        }

    }

}

// Binary search of the array using the random function
int binarySearch(int random[], int u, int v, int z)
{
    if (v >= u)
    {
        int middle = u + (v - u) / 2; // Finding the middle

        if (random[middle] == z)
        {
            return middle;
        }
        if (random[middle] < z)
        {
            return binarySearch(random, middle + 1, v, z);
        }

        return binarySearch(random, u, middle - 1, z);

    }
    return -1;

}
int main()
{
    int random[30];

    // Array's limit/bounds
    int lower=0, upper=100;
    int n, index=0, x;

    // Generates random numbers from 0-20

    srand(time(0));

    for(x=0;x<20;x++)
    {
        random[x]=(rand() % (upper-lower+1)) + lower;

        printf("%d ", random[x]);
    }

    // Time for user input

    printf("\n\nEnter number: ");
    scanf("%d", &n);

    //sorting the array
    sort(random, 30);

    //performing the binarySearch for given number
    index=binarySearch(random, 0, 19, n);

    // Occurs if number inputted  is not in array
    if(index == -1)
    {
        printf("%d does not exist", n);
    }

    else
    {
        printf("%d found at index %d ", n, index);
    }

}