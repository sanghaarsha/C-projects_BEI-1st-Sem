#include<stdio.h>

int main(){int n,rem,tem,sum;
    tem=n;
    printf("Enter a number:\n");
    scanf("%d",&n);
    loop:
        sum=0;
    while(n){
        rem=n%10;
        sum=sum+rem;
        n=n/10;
    }
    if(sum>9){
        n=sum;
        goto loop;
}
    else
        printf("sum = %d",sum);
    return 0;
}
