#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    double i,j,x,n,sum=0,fact;

    printf("Enter a number and last term:\n");
    scanf(" %lf %lf", &x,&n);

    for(i=1;i<=n;i++)
    {
            fact=1;
            for(j=1;j<=i;++j)
            {
            fact *= j;
            }

    sum = sum + (pow(x,i)/fact);
    }

    printf("The sum is : %lf ",sum);

    return 0;
}
