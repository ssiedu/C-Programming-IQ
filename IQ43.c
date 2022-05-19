#include<stdio.h>
void exchange(int *num1, int *num2);
void main()
{
	int n1,n2;
	printf("\n Enter number 1 : ");
	scanf("%d",&n1);
	printf("\n Enter number 2 : ");
	scanf("%d",&n2);
	exchange(&n1,&n2);
	getch();
}
void exchange(int *num1, int *num2)
{
	int temp = *num1;
	*num1    = *num2;
	*num2    = temp;
	printf("\n Number 1 is  : %d \n Number 2 is : %d ",*num1,*num2);
	
}
