#include<stdio.h>
void main()
{
	char  ch;

	printf("\n Enter your charcter choice to find out the charcter is vowel or not :");
	scanf("%c",&ch);
	switch(ch)
	{
		case 'a' : printf(" %c is vowel ",ch);
					break;
		case 'e' : printf("%c is vowel ",ch);
					break;
		case 'i' : printf("%c is vowel ",ch);
					break;
		case 'o' : printf("%c is vowel ",ch);
					break;
		case 'u' : printf("%c is vowel ",ch);
					break;
		default : printf("%c is consonant ",ch);
				  break;
				  
	}
	getch();
	
}
