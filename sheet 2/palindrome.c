#include <stdio.h>
#include <conio.h>
void main(){
	int in,ou=0,tem=0,neu=0; //Declare integers

	printf("Enter a number:\n");
	printf("\n");
	scanf("%d",&in);    //Read number
	tem=in;

	while(in){      //Loops until value of "in" reaches to decimal points
	neu=in%10;      //Returns Reminder of division by 10
	ou=(ou*10)+neu; //Adds Remainder for reversing it
	in=in/10;       //Divides input number by 10 without decimal
	}

	printf("\nReversed number is %d\n",ou);       //To check reversed number

	if(tem==ou){                                //Checks original number with reversed number
	printf("\n%d is a Palindrome.\n",tem);
	}

	else
    {
	printf("\n%d is not a Palindrome.\n",tem);
    }

	getch();
}
