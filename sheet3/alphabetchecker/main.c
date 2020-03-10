#include <stdio.h>
#include <conio.h>
#include <ctype.h>

void main()
{
    char c;
    printf("Enter a character:\n");
    scanf("%c",&c);

    if(isalpha(c) == 1 || isalpha(c) == 2)      //isalpha(c) function returns 1 for upper-case alphabet and 2 for lower-case and 0 for non-alphabet.
    {
        printf("%c is an alphabet.\n",c);

    if (c>=65 && c<=90 )                        //ASCII value of capital letters A-Z range from 65 to 90 and that of small alphabet range from 97 to 122.
        printf("%c is in Upper-case.",c);
    else
        printf("%c is in lower-case.",c);

    }
    else
        printf("%c is not an alphabet.",c);
    getch();
}
