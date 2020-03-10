#include <stdio.h>
#include <conio.h>

void main()
{
    int a,b;
    printf("Enter any two numbers :\n");
    scanf("%d%d",&a,&b);
    if(a>b)
        printf("%d is lesser number.",b);

    else
        printf("%d is lesser number.",a);
        getch();
}
