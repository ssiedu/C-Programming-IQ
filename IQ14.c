#include<stdio.h>
void main()
{
	char ch;
	printf("\n Enter an alphabet : ");
	scanf("%c",&ch);
	
	if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
	printf("\n input alphabet is vowel");
	else
	printf("\n input alphabet is consonent");
}
