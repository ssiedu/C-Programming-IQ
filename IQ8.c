#include<stdio.h>
void main()
{
	int first ,second , third;
	printf("\n Enter First Number : ");
	scanf("%d",&first);
	printf("\n Enter Second Number : ");
	scanf("%d",&second);
	printf("\n Enter Third Number : ");
	scanf("%d",&third);
	
	if(first>second && first>third)
	{
		printf("\n First Number is greater than second and third Number ");
	}
	else if(second > third)
	{
		printf("\n Second Number is greater than first and third Number ");
	}
	else
	{
		printf("\n Third Number is greater than first and second Number ");
	}
}
