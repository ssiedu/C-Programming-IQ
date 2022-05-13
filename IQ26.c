#include<stdio.h>
void main()
{
	int end,i,start;
	printf("\n Enter End limit : ");
	scanf("%d",&end);
	printf("\n Enter start limit :");
	scanf("%d",&start);
	printf("\n Odd Numbers Are : \n");
	
	i=start;
	do
	{
		printf("\t%d",i);
		i=i+2;
	}while(i<=end);
	getch();
}
