#include<stdio.h>
void character(char ch);  //function declaration
void main()
{
	char ch;
	printf("\n Enter u to diaplay uppercase alphabets \n");
	printf("\n Enter l to display lowercase alphabets \n");
	scanf("%c",&ch);
	character(ch);  // function call
	getch();
} 
void character(char ch) // function definition
{
	if(ch == 'U' || ch == 'u')
	{
	for(ch = 'A'; ch<= 'Z';ch++)
	printf("\t%c",ch);
	}
	else if (ch == 'L' || ch == 'l')
	{
		for(ch='a';ch<='z';ch++)
		printf("\t%c",ch);
	}
	else
	printf("\n Error! You entered an invalid character .");
}
