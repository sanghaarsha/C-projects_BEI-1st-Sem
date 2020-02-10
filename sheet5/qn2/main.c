#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    printf("Enter a number :\n");
    scanf("%d",&n);

    for(i=1;i<=10;i++)
    {
        printf("%d x %d = %d",i,n,i*n);
        printf("\n");
    }
    return 0;
}
