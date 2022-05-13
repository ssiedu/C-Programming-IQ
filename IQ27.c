#include<stdio.h>
void main()
{
	int low,high,i,flag;
	printf("\n Enter Lower Limit : ");
	scanf("%d",&low);
	printf("\n Enter Higher Limit : ");
	scanf("%d",&high);
	printf("\n Prime number between %d and %d are :",low,high);
	 
	while(low < high)  // iteration until low is not equal to high
	{
		flag = 0;
		if( low <= 1)   // ignore number less than 2
		{
			++low ;
			continue;
		}
		for(i=2;i<=low/2;++i)
		{
			if(low%i==0)
			{
				flag = 1;
				break;
			}
		}
		if(flag == 0)
		printf("\t%d",low);
		++low ;
	}
	
	getch();
}
