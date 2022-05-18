#include<stdio.h>
void main()
{
	int a[5][5],b[5][5],mul[5][5];
	int i,j,r,c,k;
	printf("\n Enter the number of row : ");
	scanf("%d",&r);
	printf("\n Enter the number of column : ");
	scanf("%d",&c);
	
	printf("\n Enter the first matrix element \n ");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("\n Element %d%d :",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n Enter the second matrix element \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
				printf("\n Element %d%d :",i+1,j+1);
			scanf("%d",&b[i][j]);
		}
	}
	
	printf("\n Matrix multiplication is : \n ");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			mul[i][j] = 0;
			for(k=0;k<c;k++)
			{
				mul[i][j] += a[i][k] * b[k][j];
			}
			
		}	
	}
	//printing result
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",mul[i][j]);
		}
		printf("\n\n");
	}
	
	getch();
	
	
	
}
