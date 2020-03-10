#include <stdio.h>
#include <conio.h>

void main()
{
    int n,i=0,flag=0;
    printf("Enter a number:\n");
    scanf("%d",&n);
    if(n<=0){
        printf("%d",n);
    }
if(n==1){
    printf("Neither prime nor composite.");
}
if(n==2){
    printf("Smallest and only even prime number.");
}
else
{if(n>2){
        for (i = 2; i <= n / 2; ++i) {
        // condition for non-prime
        if (n % i == 0) {
            flag = 1;
            break;
        }
    }
    if (n == 1) {
        printf("1 is neither prime nor composite.");
    }
    else {
        if (flag == 0)
            printf("%d is a prime number.", n);
        else{
            printf("%d is not a prime number.", n);
                if(n%2==0){
                    printf("\nIt is a Even number.");
                }
                else
                    printf("\nIt is a Odd number.");


            }
    }
    }
}
    getch();
}
