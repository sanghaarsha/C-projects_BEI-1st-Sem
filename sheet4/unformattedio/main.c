#include <stdio.h>
int main()
{
char name[20],add[25];
    printf("Enter your name:\n");
    gets(name);
    printf("Enter your address:\n");
    gets(add);
    printf("\nYour name is : ");
    puts(name);
    printf("Your address is: ");
    puts(add);
    return 0;
}
