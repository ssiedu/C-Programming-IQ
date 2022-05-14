#include<stdio.h>
void main()
{
	int num1,num2,choice,result;
	printf("\n Enter the value of number 1 : ");
	scanf("%d",&num1);
	printf("\n Enter the value of number 2 : ");
	scanf("%d",&num2);
	printf("\n 1. Addition \n 2. Sustraction \n 3. Multiplication \n 4. Division \n 5. Modulus");
	printf("\n Enter your choice : ");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1 : result = num1 + num2;
				 printf("\n Addition is : %d ",result);
				 break;
		case 2 : result = num1 - num2;
				 printf("\n Substraction is : %d ",result);
				 break;
		case 3 : result = num1 * num2;
				 printf("\n Multiplication is : %d",result);
				 break;
		case 4 : result = num1/num2;
				 printf("\n Division is : %d",result);
				 break;
		case 5 : result = num1 % num2;
				 printf("\n Modulus is : %d ",result);
				 break;
		default : printf("\n Invalid choice ");
				  break;
	}
	getch();	
	
}
