#include<stdio.h>
void main()
{
	int arr[30];
	int i,j,n,temp;
	printf("\n How many elements u want to enter : ");
	scanf("%d",&n);
	
	printf("\n Enter Element : \n");
	for(i=0;i<n;i++)
	{
		printf("\n Element %d ",i+1);
		scanf("%d",&arr[i]);
	}
	// sorting logic
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				temp   = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
				
			}
		}
	}
	printf("\n The numbers arranged in sorting manner : \n");
	for(i=0;i<n;i++)
	{
		printf(" %d\n ",arr[i]);
	}
	getch();
}
