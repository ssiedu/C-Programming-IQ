#include<stdio.h>
int facto(int num); // function declaration
void main()
{
	int number,res;
	printf("\n Enter Number : ");
	scanf("%d",&number);
	res = facto(number);   // function calling
	printf("\n factorial of a given number is : %d ",res);
	getch();
}
int facto(int num)  // function definition
{
	if(num==0)
	return 1;
	else
	return num*facto(num-1);
}
