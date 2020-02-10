#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,sum=0;
    float avg;
    for(i=1;i<=10;i++){
        printf("Enter a number\n:");
        scanf("%d",&n);
        sum=sum+n;
    }
    avg=(sum/10);
    printf("The sum of entered numbers = %d and avg= %.2f.",sum,avg);
    return 0;
}
