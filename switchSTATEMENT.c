//this is a example of a calculator with the help of switch statement
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void main()
{
    int operator;
    float a,b;
    printf("enter any 2 number: ");
    scanf("%f%f",&a,&b);
    printf("enter 1.add\t2.sub\t3.div\t4.multiply\t5.exit\n");
    scanf("%d",&operator);

    switch (operator)
    {
    case 1:
    printf("%f",a+b);
        break;
    case 5:
    printf("the program is exited\n");
    exit (0);
    
    default:
    printf("the entered operation is wrong");

        break;
    }
    


}
