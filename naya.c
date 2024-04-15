// to find a greater number among two  number by certifed programmer i.e Greece Dahal ..
#include <stdio.h>
#include <conio.h>
int main()
{
    int a, b;
    printf("enter any two number: ");
    scanf("%d%d", &a, &b);
    if (a ==b)
    {
        printf("both number are equal");
    }
    else if (a > b)
    {
        printf("%d is greater", a);
    }
    else
    {
        printf("%d is greater", b);
    }
}
