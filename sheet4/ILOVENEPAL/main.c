#include<stdio.h>

int main()
{
char s[]="I LOVE NEPAL";
int i,j;
for(i=1;s[i];i++)
{
for(j=0;j<=i;j++)
printf("%c",s[j]);
printf("\n");
}
return 0;

}
