#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,a=0,b=1,i;
    printf("Enter no. of terms:\n");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        printf("%d\t",a);
        a=a-b;
        b=b+a;
        a=b-a;
        a+=b;
    }
    return 0;
}
