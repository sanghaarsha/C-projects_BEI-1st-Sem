#include <stdio.h>
#include <conio.h>

void main()
{
    int a,b;
    printf("Enter two values:\n");
    scanf("%d%d",&a,&b);
    printf("Values before swapping : %d and %d.\n",a,b);
    a=a-b;
    b=b+a;
    a=b-a;
    printf("Values after swapping : %d and %d.\n",a,b);
    getch();
}
