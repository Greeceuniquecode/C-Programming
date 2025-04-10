//created by Greece Dahal
#include <stdio.h>

void main()
{
    float d, w, m, y;
    printf("\n Enter the number of days\n");
    scanf("%f", &d);
    w = d / 7, m = d / 30, y = d / 365;
    printf("The number of days in week is: %.2f\nThe number of days in month is: %.2f\nThe Number of days in year is: %.4f", w, m, y);
}