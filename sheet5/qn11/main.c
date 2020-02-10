#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,rev=0,sum,init;
    printf("Enter a number: ");
    scanf("%d",&num);
    init=num;
    while(num){
    sum=num%10;
    rev=(rev*10)+sum;
    num=num/10;
    }
    if(init==rev)
    printf("The number %d is a palindrome.\n",rev);
    else
    printf("nThe number %d is not a palindrome.\n",init);

    return 0;
}
