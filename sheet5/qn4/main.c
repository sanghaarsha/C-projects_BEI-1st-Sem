#include <stdio.h>

int main()
{
    double i, s = 0.0;
    int n;
    printf("Enter a number:\n");
    scanf("%d",&n);

    for (i = 1; i <= n; i++)
    {
      s = s+(1/i);
    }

    printf("Sum is : %f", s);
    return 0;
}
