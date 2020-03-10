#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[5],large=0,i,low;
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
        if(a[i]>large)
            large=a[i];
        if(a[i]<low)
            low=a[i];
        }
        printf("largest number : %d\n",large);
        printf("lowest number : %d",low);
    return 0;
}
