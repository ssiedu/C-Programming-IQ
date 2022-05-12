#include<stdio.h>
void main()
{
	int year;
	printf("\n Enter Year : ");
	scanf("%d",&year);
	
	if(year%400==0)
	{
		printf("\n Year %d is leap year",year);
	}
	else if (year%100==0)
	{
		printf("\n year %d is not leap year",year);
	}
	else if(year%4==0)
	{
		printf("\n Year %d is leap year",year);
	}
	else
	{
		printf("\n Year %d is not leap year",year);
	}
}
