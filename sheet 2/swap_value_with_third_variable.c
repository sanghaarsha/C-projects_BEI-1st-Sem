#include <stdio.h>
#include <conio.h>

void main()
{
    int a,b,c;
    printf("Enter two values:\n");
    scanf("%d%d",&a,&b);
    printf("Values before swapping : %d and %d.\n",a,b);
    c=a;
    a=b;
    b=c;
    printf("Values after swapping : %d and %d.\n",a,b);
    getch();
}
