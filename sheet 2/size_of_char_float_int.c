#include <stdio.h>
#include <conio.h>

void main()
{
    int i;
    float f;
    char c;
    i=10;
    f=9.9;
    c='x';
    printf("The values are %d, %0.1f, %c\n",i,f,c);
    printf("Size of integer : %d\n",sizeof(i));
    printf("Size of float : %d\n",sizeof(f));
    printf("Size of character : %d\n",sizeof(c));
getch();
}
