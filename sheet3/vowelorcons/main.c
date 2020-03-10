#include <stdio.h>
#include <conio.h>

void main()
{
    char a;
    printf("Enter a character:\n");
    scanf("%c",&a);
    if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U')
        printf("Given character is vowel.");
    else
        printf("Given character is consonant.");
    getch();
}
