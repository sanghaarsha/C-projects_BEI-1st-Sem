#include <stdio.h>
#include <stdlib.h>

int main()
{   int k=1;
    int i,j;
    for(i=1;i<=5;i++){
    for(j=5;j>=k;j--){
    printf("%d ",j);
    }
    k=k+1;
    printf("\n");
    }
    return 0;
}
