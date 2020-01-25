#include <stdio.h>
#include <conio.h>

void main()
{
    int year;
    loop:
    printf("Enter any year:\n");
    scanf("%d",&year);

        if (year%4==0)
            {
                if(year%100==0)
                {
                    if(year%400==0)
                    {
                        printf("%d is a leap year.\n",year);
                    }
                    else
                        printf("%d is not a leap year.\n",year);
                }
           else printf("%d is a leap year.\n",year);
            }
        else
                printf("%d is not a leap year.\n",year);
    goto loop;
    getch();
}
