//created by Greece Dahal
#include <stdio.h>
void main()
{
    int n, i;
    //Strings can be defined in array by defining char in array.
    char name[20][30]; // First for array length and second is for string length
    printf("\nHow many names do you want to store?\n");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("\nEnter the name:\t");
        scanf("%s", name[i]); // %s is used for string, no & sign is required for array as string uses pointer for char
    }
    printf("\nThe stored names are\n");
    for (i = 0; i < n; i++)
    {
        printf("\n%d. %s\n", i + 1, name[i]);
    }
}