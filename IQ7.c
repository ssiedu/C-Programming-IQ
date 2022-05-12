#include<stdio.h>
void main()
{
	int first_num,second_num;
	printf("\n Enter first number : ");
	scanf("%d",&first_num);
	printf("\n Enter second number : ");
	scanf("%d",&second_num);
	if(first_num > second_num)
	{
		printf("\n first number %d is greater than second number %d",first_num,second_num);
	}
	else
	{
		printf("\n second number %d is greater than first number %d",second_num,first_num);
	}
	
}
