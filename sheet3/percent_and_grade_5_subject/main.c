#include <stdio.h>

int main()
{
    int phy, amech, bel, math, cprog;
    float per;
    printf("Enter five subjects marks: ");

    scanf("%d%d%d%d%d", &phy, &amech, &bel, &math, &cprog);

    per = (phy + amech + bel + math + cprog) / 5.0;

    if(phy>=40&&amech>=40&&bel>=40&&math>=40&&cprog>=40){
    printf("Percentage = %.2f\n", per);
            if(per>=90){
                printf("Your grade is : A");
            }
            else if(per>=80){
                printf("Your grade is : B");}
             else if(per>=70){
                printf("Your grade is : C");}
             else if(per>=60){
                printf("Your grade is : D");}

             else{
                printf("Your grade is : E");}
    }
    else
        printf("You have failed.");

    return 0;
}
