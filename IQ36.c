#include<stdio.h>
void main()
{
	int i,n,arr[50];
	printf("\n How many elements you want to enter : ");
	scanf("%d",&n);
	printf("\n Enter Elements : ");
	for(i=0;i<n;i++)
	{
		printf("\n Enter Element %d : ",i+1);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		if(arr[0]<arr[i])
		{
			arr[0] = arr[i];
		}
	}
	printf("\n Largest Element : %d",arr[0]);
	getch();
}
