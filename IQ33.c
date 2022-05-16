#include<stdio.h>
int fact(int num);  // function declaration
void main()
{
	int number,res;
	printf("\n Enter Number : ");
	scanf("%d",&number);
	res = fact(number);   // function calling
	printf("\n factorial of %d is : %d ",number,res);
	getch();
}
int fact (int num) // function definition
{
	int i,f=1;
	for(i=1;i<=num;i++)
	{
		f= f*i;
	}
	return f;
}
