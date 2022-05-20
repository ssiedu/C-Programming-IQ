#include<stdio.h>
void main()
{
	char str[25];
	printf("\n Enter the string : ");
	scanf("%[^\n]s",&str);
	//gets(str);
	printf("\n you entered %s ",str);
	getch();
}
