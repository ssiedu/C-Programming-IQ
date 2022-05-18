#include<stdio.h>
void main()
{
	int a[5][5],b[5][5],temp[5][5];
	int i,j,r,c;
	printf("\n Enter the number of rows : ");
	scanf("%d",&r);
	printf("\n Enter the number of column : ");
	scanf("%d",&c);
	
	printf("\n Enter the first matrix element \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("\n Element a%d%d : ",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("\n Enter the second matrix element \n ");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("\n Element b%d%d : ",i+1,j+1);
			scanf("%d",&b[i][j]);
		}
	}
	
	printf("After swapping \n ");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			temp[i][j] =a[i][j];
			a[i][j]  = b[i][j];
			b[i][j]  = temp[i][j];
		}
	}
	printf("\n first matrix : \n ");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n\n");
	}
	printf("\n Second matrix : \n ");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n\n");
	}
	getch();
}
