#include <stdio.h>
#include <stdlib.h>

void main()
{
    int n;
    printf("Enter a number :\n");
    scanf("%d",&n);
    if(n%2==0)
        printf("Even");
    else
        printf("Odd");
    getch();
}
