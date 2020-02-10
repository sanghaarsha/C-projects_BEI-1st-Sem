#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n,num,init,arm=0,rev=0,pwr=0;
    printf("Enter a number: \n");
    scanf("%d",&n);
    init=n;
    num=n;
    while(n){
    pwr=pwr+1;
    n=n/10;
    }

    while(num){
    rev=num%10;
    arm=pow(rev,pwr)+arm;
    num=num/10;
    }

    if(arm==init){
    printf("%d is an armstrong number.",init);
    }
    else
    printf("%d is not an armstrong number.",init);
    return 0;
}
