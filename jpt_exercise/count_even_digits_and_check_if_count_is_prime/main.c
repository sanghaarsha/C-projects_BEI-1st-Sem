#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,i,naya,count=0,div,res,temp;
    printf("Enter a number:\n");
    scanf("%d",&num);
    while(num){
        naya=num%10;
        if(naya%2==0){
            count++;
        }
        num=num/10;
    }
    printf("no. of even digits = %d\n",count);
    temp=count;
    for(i=1;i<=count;i++){
        div=count%i;
        if(div==0){
            res++;
        }
    }
    if(res==2){
        printf("The count %d is prime\n",temp);
    }
    else
        printf("The count %d is not prime\n",temp);
    return 0;
}
