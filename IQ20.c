#include<stdio.h>
void main()
{
	int number , fact = 1 , i;
	
	printf("\n Enter the Number : ");
	scanf("%d",&number);
	
	for( i=1 ; i<=number ; i++)
	{
		fact = fact * i;   // fact = 1 *1 = 1 // fact = 1*2 = 2 //factb = 2*3=6//fact = 6*4-24//fact = 24*5=120
	}
	printf("\n factorial is : %d ",fact);
	getch();
}
