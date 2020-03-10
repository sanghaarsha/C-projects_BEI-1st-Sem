#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=5,b=9;
    printf("a=%d,b=%d\n",a,b);
    printf("a&b=%d\n",a&b);
    printf("a|b=%d\n",a|b);
    printf("a^b=%d\n",a^b);
    printf("~a=%d\n",~a);
    printf("(b<<2)+(a<<1)=%d\n",(b<<2)+(a<<1));
    printf("(b>>1)+(a>>1)=%d\n",(b>>1)+(a>>1));
    return 0;
}
