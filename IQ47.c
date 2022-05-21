#include<stdio.h>
void main()
{ 
 char str[11] = "ssidigital";
 int i=0;
 int count = 0;
 
 while (str[i]!='\0')
 {
 	if(str[i]=='a' || str[i]=='e' || str[i] == 'o' || str[i] == 'i' || str[i]=='u')
 	{
 		count++;
	 }
	 i++;
 }
 printf("\n The number of vowels is %d",count);
 getch();
}
