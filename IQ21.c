#include<stdio.h>
void main()
{
	int num , rev=0 ,sum = 0 , tod = 0;

	printf("\n Enter Number : ");
	scanf("%d",&num);
	int new = num;
	while(num>0)//123>0 // 12>0//1>0
		{
			rev = rev * 10 + num % 10;// 0 + 3 =3 // rev = 30 +2=32 //321
			sum = sum + num % 10; //0+3 = 3//  3+2=5//5+1 =6
			tod = tod + 1;//1//2//3
			num = num/10;//123/10 = 12//12/10 1//0
		}

	
	printf("\n reverse number is        : %d ",rev);
	printf("\n sum of digit is          : %d ",sum);
	printf("\n Total number of digit is : %d" ,tod);
	
	if(new == rev )
	printf("\n Number is pallindrom ");
	else
	printf("\n Number is not pallindrom ")	;
}
