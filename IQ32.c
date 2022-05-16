#include<stdio.h>
int cubeOfNumber(int n)  //function definition
{
	return n*n*n;
}
void main()
{
	int number ;
	int cube;
	printf("\n Enter Number : ");
	scanf("%d",&number);
	cube = cubeOfNumber(number);     // function calling 
	printf(" Cube of %d is : %d",number,cube);
	getch();
}
