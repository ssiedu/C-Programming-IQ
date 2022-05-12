#include<stdio.h>
void main()
{
	int number;
	printf("\n Enter The Number : ");
	scanf("%d",&number);
	
	if(number==0)
	{
		printf("\n Number is Zero ");
	}
	else if(number%2==0)
	{
		printf("\n Number is Even ");
	}
	else
	{
		printf("\n Number is odd ");
	}
	getch();
}
