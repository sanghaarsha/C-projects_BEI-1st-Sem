#include <stdio.h>
#include <stdlib.h>
int prime(int);
int main(){
    int num,a;
    printf("Enter a number:\n");
    scanf("%d",&num);
    a=prime(num);
    if(a==1)
        printf("Number is prime");
    else
        printf("Number is not a prime");
    return 0;
}

int prime(int n1){
    int result,count,ans,i;
    for(i=2;i<=n1;i++){
        ans=n1%i;
        if(ans==0)
            count++;
    }
    if (count<=2)
        result=1;
    else
        result=0;
    return result;
}
