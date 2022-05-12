#include<stdio.h>
void main()
{
	int first,second;
	printf("\n Enter the value of first : ");
	scanf("%d",&first);
	printf("\n Enter the value of second : ");
	scanf("%d",&second);
	
	first  = first + second;
	second = first - second;
	first  = first - second;
	
	printf("\n value of first : %d",first);
	printf("\n value of second : %d",second);
	getch();
	
	
}
