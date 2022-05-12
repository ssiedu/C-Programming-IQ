#include<stdio.h>
void main()
{
	char ch;
	printf("\n Enter character : ");
	scanf("%c",&ch);
	
	if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
	printf("\n Input  Character is an alphabet");
	
	else if(ch>='0' && ch<='9')
	printf("\n Input Character is digit");
	
	else
	printf("\n Input Character is special symbol");
	
	getch();
}
