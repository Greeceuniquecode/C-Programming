#include <stdio.h>
#include <conio.h>
void main()
{
    int a[100];
    int i, n;
    printf("how many numbers do you want to add\n");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("enter a number");
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
}