#include<stdio.h>
struct employee
{
	int id;
	char name[25];
	float salary;
}emp[3];
void main()
{
	int i;
	printf("\n Enter Employee Detail \n ");
	for(i=0;i<3;i++)
	{
		printf("\n Enter Employee id : ");
		scanf("%d",&emp[i].id);
		printf("\n Enter Employee Name : ");
		scanf("%s",&emp[i].name);
		printf("\n Enter Employee salary : ");
		scanf("%f",&emp[i].salary);
	}
	printf("\n Details of Employee \n ");
	for(i=0;i<3;i++)
	{
		printf("\n Employee Id       : %d ",emp[i].id);
		printf("\n Employee Name     : %s ",emp[i].name);
		printf("\n Employee salary   : %.2f",emp[i].salary);
	}
	getch();
}
