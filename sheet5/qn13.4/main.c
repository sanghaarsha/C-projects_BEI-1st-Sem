#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,a=1;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",a);
            a=a+1;
        }
    printf("\n");
    }
    return 0;
}
