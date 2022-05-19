#include<stdio.h>
void main()
{
	int number ;
	int *ptr;
	printf("\n Enter Number : ");
	scanf("%d",&number);
	
	ptr= &number;
	
	printf("\n Address of number : %d",&number);
	/* unsigned int address */
	printf("\n address of number in the form of unsigned int : %u",ptr);
	/* physical address in the form of hexadecimal */
	printf("\n address of number in the form of hexadecimal : %p",ptr);
	
	getch();
}
