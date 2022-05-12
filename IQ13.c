#include<stdio.h>
void main()
{
	int ch;
	printf("\n Enter character ASCII value : ");
	scanf("%d",&ch);
	
	if(ch>=97 && ch<=122)
	{
		printf("\n Entered input %c is an alphabet",ch);
		
	}
	else if(ch>=65 && ch<=90)
	{
		printf("\n Entered input %c is an alphabet",ch);
	}
	else
	{
		printf("\n Entered input %c is not an alphabet ",ch);
	}
}
