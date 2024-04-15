// this is a program done by a pro official google certified programmer named Greece Dahal
#include <stdio.h>
#include <conio.h>
// euta number halnu parne tyo number positive or negative or odd ki tw even
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
// okay the program is done with highly specilaized programmer logic with cool syntax
