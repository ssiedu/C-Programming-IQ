#include<stdio.h>
void main()
{
	int number,i,start;
	printf("\n Enter End limit : ");
	scanf("%d",&number);
	printf("\n Enter start limit :");
	scanf("%d",&start);
	printf("\n Even Numbers Are :\n");
	i=start;
	
	while(i<=number)
	{
		printf("\t%d",i);
		i=i+2;
	}
	getch();
}
