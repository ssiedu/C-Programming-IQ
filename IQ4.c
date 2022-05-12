#include<stdio.h>
void main()
{
	int p,r,t;  // variable declaration
	float si;
	printf("\n Enter Amount : ");
	scanf("%d",&p);
	printf("\n Enter rate of interest : ");
	scanf("%d",&r);
	printf("\n Enter time : ");
	scanf("%d",&t);
	
	si= (p*r*t)/100;   //formula of simple interest
	
	printf("\n Simple Interest : %.2f",si);
	getch();
}
