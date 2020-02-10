#include <stdio.h>
#include <curses.h>
void main()
{
    int a;
    printf("Enter a character:\n");
    a=getch();
    printf("ASCII = %d",a);
    getch();
}
