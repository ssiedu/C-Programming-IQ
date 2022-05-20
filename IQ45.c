#include<stdio.h>
void main()
{
	char alpha[27];
	int i;
	char *ptr = &alpha;
	printf("\n Alphabets are : \n ");
	for(i=0;i<26;i++)
	{
		*ptr = i + 'A';
		printf("\n %c ",*ptr);
		ptr++;
	}
	getch();
}
