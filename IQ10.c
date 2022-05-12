#include<stdio.h>
void main()
{
	int  number;
	printf("\n Enter the Number : ");
	scanf("%d",&number);
	
	if(number%5==0 && number%11==0)
	{
		printf("\n Number is divisible by both ");
	}
	else if(number%11==0)
	{
		printf("\n Number is divisible by 11 ");
		
	}
	else if (number%5==0)
	{
		printf("\n Number is divisible by 5 ");
	}
	else
	{
		printf("\n Number is not divisible by both");
	}
	getch();
}
