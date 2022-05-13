#include<stdio.h>
void main()
{
	int num,r,sum=0,temp;
	
	printf("\n Enter Number : ");
	scanf("%d",&num);
	
	temp = num;
	
	while(num>0)       
	{
		r = num%10;        
		sum = sum + (r*r*r);    
		num = num/10;     
	}
	if( temp == sum)
	printf("\n Armstrong Number ");
	else 
	printf("\n Not Armstrong Number ");
	getch();
}
