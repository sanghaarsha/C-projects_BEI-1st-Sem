#include <stdio.h>
#include <stdlib.h>

int main()
{
    double i,j,n,sum=0,fact;

    printf("Enter a number:\n");
    scanf("%lf",&n);

    for(i=1;i<=n;i++)
    {
            fact=1;
            for(j=1;j<=i;++j)
            {
            fact *= j;
            }

    sum=sum+(1.0)/fact;
    }

    printf("The sum is : %lf ",sum);

    return 0;
}
