#include<stdio.h>
int product(int *n1,int *n2,int *n3);
void main()
{
	int num1,num2,num3,res;
	printf("\n Enter the value of number 1 : ");
	scanf("%d",&num1);
	printf("\n Enter the value of number 2 : ");
	scanf("%d",&num2);
	printf("\n Enter the value of number 3 : ");
	scanf("%d",&num3);
	res = product(&num1,&num2,&num3);
	printf("\n product of three numbers : %d",res);
	getch();	
}
int product(int *n1,int *n2,int *n3)
{
	return (*n1 * *n2 * *n3);
}
