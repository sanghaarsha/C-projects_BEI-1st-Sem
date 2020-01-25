#include <stdio.h>
#include <conio.h>

void main()
{
    int n;
    printf("Enter a number:\n");
    scanf("%d",&n);
    if (n%5==0 && n%11==0){
        printf("Divisible by 5 and 11.");
    }
    else
         printf("Not divisible by 5 and 11.");
    getch();
}
