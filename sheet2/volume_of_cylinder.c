#include <stdio.h>
#include <conio.h>
#define PI 3.14
void main()
{
    int r,h,vol,ar;
   printf("Enter radius and height of cylinder :\n");
   scanf("%d%d",&r,&h);
   ar = 2*PI*r*(r+h);
   vol = PI*r*r*h;
   printf("Area=%d\nVolume=%d\n",ar,vol);
   getch();
}
