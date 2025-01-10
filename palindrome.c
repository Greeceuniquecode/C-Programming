#include <stdio.h>
#include <conio.h>
void main()
{
    int a, b, rev, rem;
    printf("enter number\n");
    scanf("%d", &a);
    b = a;
    rev = 0;
    while (b != 0)
    {
        rem = b % 10;
        rev = rev * 10 + rem;
        b = b / 10;
    }
    if (a == rev)
    {
        printf("the number is palindrome\n");
    }
    else
    {
        printf("the number is not palindrome\n");
    }
}