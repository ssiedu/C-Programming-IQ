#include<stdio.h>
void fibonacciSeries(int n)
{
	static int n1=0,n2=1,n3;
	if(n>0)
	{
		n3 = n1+n2;
		n1=n2;
		n2=n3;
		printf("\t%d",n3);
		fibonacciSeries(n-1);  // recursion
	}
}
void main()
{
	int num,n1=0,n2=1;
	printf("\n Enter the number of element :");
	scanf("%d",&num);
	printf("\n Fibonacci Series : ");
	printf("%d \t %d",n1,n2);
	fibonacciSeries(num-2);
	getch();
}
