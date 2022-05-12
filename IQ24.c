#include<stdio.h>
void main()
{
	int number,i;
	printf("\n Enter Limit : ");
	scanf("%d",&number);
	printf("\n Natural Numbers Are : \n");
	i=1;
    do //for(i=1;i<=number;i++)
	{
		printf("\t %d",i);
		i++;
	}while(i<=number);
	getch();
}
