#include <stdio.h>
#include <conio.h>
void main()
{
    int a,b,c;
    printf("Enter any three numbers:\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c){
            printf("%d is greatest among all.",a);
    }
    else if(b>a && b>c){
            printf("%d is greatest among all.",b);
    }
    else if(c>a && c>b){
        printf("%d is greatest among all.",c);
    }
    else{
        printf("All values must be integer.\nAt least two values must be different.");
    }
    getch();
}