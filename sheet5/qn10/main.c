#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,rev=0,sum;
    printf("Enter a number: ");
    scanf("%d",&num);
    while(num){
    sum=num%10;
    rev=(rev*10)+sum;
    num=num/10;
    }
    printf("Reversed number is : %d",rev);
    return 0;
}
