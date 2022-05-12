#include<stdio.h>
void main()
{
	int num,first = 0,second = 1,next,i=2;
	
	printf("\n Enter Number : ");
	scanf("%d",&num);
	
	printf("%d \t %d",first,second);
	while(i<num)
	{
		next = first + second;
		printf("\t %d",next);
		
		first = second;   
		second = next;	
		i++;	
	}
	getch();
}
