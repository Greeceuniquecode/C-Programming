#include <stdio.h>

int main()
{
    int i, j;
    for ( i = 1; i <= 10; i++)
    {
        printf("%d\t", i);
        if (i==5)
        {
            break;
        }
        
    }
    printf("\n Continue\n");
        for ( j = 1; j <= 10; j++)
    {
        printf("%d\t", j);
        if (j==5)
        {
            continue;
        }
        
    }
    return 0;
}
