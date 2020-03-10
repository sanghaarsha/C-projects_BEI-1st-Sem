#include <stdio.h>
#include <conio.h>

void main()
{
    int a,b,c;
    printf("Enter three numbers:\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
        printf("%d is maximum",a);
    else if(b>a && b>c)
        printf("%d is maximum",b);
    else if(c>b && c>a)
        printf("%d is maximum",c);
    else
        printf("Print valid values.");

getch();
}
