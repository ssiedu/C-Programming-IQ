#include<stdio.h>
void main()
{
	int first,second,temp;
	printf("\n Enter the value of first : ");
	scanf("%d",&first);
	printf("\n Enter the value of second : ");
	scanf("%d",&second);
	
	printf("\n Before swapping value of first : %d",first);
	printf("\n Before swapping value of second: %d",second);
	
	temp   = first;
	first  = second;
	second = temp;
	
	printf("\n After swapping value of first : %d",first);
	printf("\n After swapping value of second: %d",second);
	getch();
}
