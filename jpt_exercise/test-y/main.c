#include <stdio.h>

int main()
{
    int n,i,sum=0;
    printf("Enter last term :\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum+= (i*(i+1))/2*(10*i);
        if(i<n)
        printf("(%d x %d+1)/2 x (10 x %d) + ",i,i,i);
        else
        printf("(%d x %d+1)/2 x (10 x %d) = ",i,i,i);
    }
    printf(" %d\n",sum);
    return 0;
}
