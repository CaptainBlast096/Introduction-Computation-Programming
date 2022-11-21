#include <stdio.h>

void print_rectangle(int length, int width) // Void is used to indicate a return type, point is universal
{
    int l,w;
    for (l = 0; l < length; l++)
    {
        for (w = 0; w < width; w++)
            printf("*");
            printf("\n");
    }

}
int main()
{
    int length, width;
    printf("Enter the length:");
    scanf("%d", &length);

    printf("Enter the width:");
    scanf("%d", &width);
    print_rectangle(length, width); // Output
    return 0;
}

