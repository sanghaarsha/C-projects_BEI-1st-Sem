#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=0,b=1,n,i,sum=0;

    printf("Enter last term for fibbonaci series: \n");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        sum=a+b;

        if(i==n){
            printf("%d",sum);
        }
        else{
            printf("%d,",sum);
        }

        b=a;
        a=sum;

    }

    return 0;
}
