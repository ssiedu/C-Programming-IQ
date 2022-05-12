#include<stdio.h>
void main()
{
	int number;
	int i,flag=0;
	printf("\n Enter Number : ");
	scanf("%d",&number);
	
	for(i=2;i<=number/2;i++)
	{
		if(number%i==0)
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
	printf("\n Number is prime");
	else
	printf("\n Number is not prime");
	getch();
}
