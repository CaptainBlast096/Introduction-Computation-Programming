/***************************************************************************
 * Title:               Assignment #7 Task 4
 * Author:              Jaleel Rogers
 * Email:               jrogers1239@floridapoly.edu
 * Creation date:       03/30/2022 @ 8:30 PM
 * Modification date:   03/31/2022 @ 1:22 PM
 * Description:         Write a C program that has a function called tally. The function tally tracks
 *                      the number of occurrences of both the head and the tail. The function tally takes
 *                      two parameters selection and value. The variable value is 0 for the head, and 1 for the tail.
 **************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h> // For randomization

enum coin{head,tail}; // Assigning head and tail to integral constants

int toss()
{
    if (rand() % 2 == 0)
        return head;
        return tail;

}

int tally(int selection,int value)
{
    if (selection > 1 || selection < 0 || value>1 || value < 0)
        return -1;
    static int total_head = 0;
    static int total_tail = 0;

    int head_count = 0,tail_count=0;

    for (int i = 0; i < 10000; i++)  // Using the function 10,000 times
    {
        if (toss() == head)    // Counts the numbers of heads & tails
            head_count++;
        else
            tail_count++;
    }

    if (selection == 0 && value == 0)
    {
        return head_count;  // Returns number of heads
    }

    else if (selection == 1 && value == 0)
    {
        total_head += head_count;
        printf("Total head: %d\n", total_head); // Increment heads and returns -1
        return -1;
    }

    else if (selection == 0 && value == 1)
    {
        return tail_count;   // Returns number of tails
    }

    else if (selection == 1 && value == 1)
    {
        total_tail += tail_count;
        printf("Total tail: %d\n", total_tail); // Increments tails and returns -1
        return -1;
    }
}
int main() // Prints the results
{
    srand(time(0)); // Randomizing values

    static int selection, value;
    static int result;
    printf (" 0 & 0 = head | 1 & 0 = head incremented & -1 | 0 & 1 = tail | 1 & 1 = tail incremented & -1|\n");

    printf("\nEnter selection from 1 or 0: ");
    scanf("%d", &selection);
    printf("\nEnter value from 1 or 0: ");
    scanf("%d", &value);

     // Calls the function to get the result
    result = tally (selection, value);
    printf("Result: %d", result);

    return 0;
}