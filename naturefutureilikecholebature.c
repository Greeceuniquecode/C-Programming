// to find if the inputed number is positve, negative odd or even
#include <stdio.h>
#include <conio.h>
void main()
{
    int a;
    printf("enter any number that you comes in your mind after saying 1\t");
    scanf("%d", &a);
    if (a == 0)

    {
        printf("%d is neutral number", a);
    }
    else
    {
        if (a > 0)
        {
            printf("%d is postive", a);
        }
        else
        {
            printf("%d is a negative number you fool\t", a);
        }
        if (a % 2 == 0)
        {
            printf("%d is even", a);
        }
        else
        {
            printf("%d is odd", a);
        }
    }
}
// follow greeceuniquecode at github for more freshly brewed content 
