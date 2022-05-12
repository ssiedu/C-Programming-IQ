#include<stdio.h>
void main()
{
	int age;
	
	printf("\n Enter the age of person : ");
	scanf("%d",&age);
	
	if(age >= 18)
	{
		printf("\n Person is elligible for vote ");
	}
	else
	{
		printf("\n person is not elligible for vote");
	}
	getch();
}
