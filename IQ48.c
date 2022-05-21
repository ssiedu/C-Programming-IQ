#include<stdio.h>
void main()
{
	char text[50];
	int i;
	int count =0;
	printf("\n Enter string : ");
	gets(text);
	for(i=0;text[i]!='\0';i++)
	{
		count ++;
	}
	printf("\n length of string '%s' = %d ",text,count);
	 getch();
}
