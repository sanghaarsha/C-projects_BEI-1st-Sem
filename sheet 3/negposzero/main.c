#include <stdio.h>
#include <conio.h>

void main()
{
    int num;
    printf("Enter any number:\n");
    scanf("%d",&num);
    if(num>0)
        printf("%d is positive.",num);
    else if(num<0)
        printf("%d is negative.",num);
    else
        printf("%d is zero.",num);
    getch();
}
