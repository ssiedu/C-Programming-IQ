#include<stdio.h>
void main()
{
	int i;
	float f;
	char c;
	void *ptr;
	
	ptr = &i;
	i=10;
	printf("\n integer pointer : %d ",*(int*)ptr);
	
	ptr = &f;
	f=12.3;
	printf("\n float pointer : %f ",*(float*)ptr);
	
	ptr = &c;
	c='z';
	printf("\n char pointer : %c ",*(char*)ptr);
	getch();
}
