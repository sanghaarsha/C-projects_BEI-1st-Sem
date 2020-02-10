#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2,i,count=0;
    printf("Enter two numbers:\n");
    scanf(" %d %d", &n1, &n2);
    n1=n1+1;
    n2=n2-1;
    for(i=n1;i<=n2;i++){
    if(i%2==0){
    printf("%d\n",i);
    count=count+1;
    }
    }
    if(count!=0){
    printf("\nno. of even digits between %d and %d is %d.\n", n1, n2, count);
    }
    else
    printf("\nNo even digits found between %d and %d.", n1, n2);
    return 0;
}
