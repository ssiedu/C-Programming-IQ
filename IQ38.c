#include<stdio.h>
void main()
{
	int a[10][10],b[10][10],sum[10][10];
	int r,c,i,j;
	printf("\n Enter Rows : ");
	scanf("%d",&r);
	printf("\n Enter Column : ");
	scanf("%d",&c);
	
	printf("\n Enter first matrix elements :\n ");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("\n Element a%d%d : ",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("]\n Enter second matrix elements : \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("\n Elements b%d%d : ",i+1,j+1);
			scanf("%d",&b[i][j]);
		}
	}
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			sum[i][j] = a[i][j] + b[i][j];
		}
	}
	
	printf("\n Matrix addition is : \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("\t%d",sum[i][j]);
		}
		printf("\n\n");
	}
	getch();
}
