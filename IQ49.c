#include<stdio.h>
void main()
{
	char text1[50];
	char text2[50];
	int i;
	/*input string from user*/
	printf("\n Enter string : ");
	gets(text1);
	
	/* copy text 1 to text 2 character by character */
	for(i=0;text1[i]!='\0';i++)
	{
		text2[i] = text1[i];
	}
	/* makes sure that the string is null terminted*/
	text2[i]='\0';
	
	printf("\n first string = %s ",text1);
	printf("\n second string = %s ",text2);
	printf("\n Total character copied = %d",i);
	getch();
}
