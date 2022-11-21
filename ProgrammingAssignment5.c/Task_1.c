#include <stdio.h>
int main()

{
char character;

while (1) // 1 means true 0 means false
{
    puts("Enter a character: ");
    scanf("%c", &character); // While loop decides the placing of the input

    if (character == EOF) //Will end the program if user enters
        {
            break;   // Since it's in a loop, its needs a break or condition to stop the program
        }

    if ((character >= 'A' && character <= 'Z' ) || (character >= 'a' && character <= 'z'))
    // Checks whether the character is an alphabet or not
    {
        switch (character) // switch is making character usable
        {
        // Break each character into its own case
        // Add lower case and upper case
            case 'A':
            case 'a':
            case 'E':
            case 'e':
            case 'I':
            case 'i':
            case 'O':
            case 'o':
            case 'u':
            case 'U':

                printf("%c is a vowel\n", character);

                break;


            default:
                printf("%c is a consonant\n", character);
                // If it's not a vowel, by default it a consonant
        }

}
    else // What to put so that it doesn't repeat?
    {
        puts("\nNot an English Alphabet\n");
    }
    // If It's neither a consonant nor a vowel
     // If return placed here, will not loop
}
    return 0;
}
