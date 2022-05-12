#include<stdio.h>
void main()
{
	int number;
	printf("\n Enter Number : ");
	scanf("%d",&number);
	
	if (number > 0)
	{
		printf("\n Number %d is positive Number ",number);
	}
	else if(number < 0)
	{
		printf("\n Number %d id Negative Number ",number);
	}
	else
	{
		printf("\n Number %d is Zero",number);
	}
}
