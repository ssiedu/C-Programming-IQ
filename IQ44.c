#include<stdio.h>
void main()
{
	int a;
	float f;
	char c;
	/* Null Pointer*/	
	int *ptr = NULL;
	float *fptr = NULL;
	char *cptr = NULL;
	
	
	ptr = &a;
	a=10;
	printf("\n value of a : %d \n value of ptr :%d ",a,*ptr);
	
	fptr = &f;
	f=12.3;
	printf("\n value of f : %f \n value of fptr : %f ",f,*fptr);
	
	cptr = &c;
	c='a';
	printf("\n value of c : %c \n value of cptr : %c ",c,*cptr);
	getch();
}
