#include<stdio.h>
void main()
{
	int math,che,bio,com,phy,total;
	float per;
	
	printf("\n Enter Marks of subjects : ");
	printf("\n Mathematics : ");
	scanf("%d",&math);
	printf("\n Chemistry : ");
	scanf("%d",&che);
	printf("\n Biology : ");
	scanf("%d",&bio);
	printf("\n Computer : ");
	scanf("%d",&com);
	printf("\n Physics : ");
	scanf("%d",&phy);
	
	total = (math+che+bio+com+phy);
	
	per = (total*100)/500;
	
	printf("\n percewntage is : %.2f",per);
	
	if(per >= 90)
	printf("\n Grade A ");
	
	else if ( per >= 80 && per<90)
	printf("\n Grade B ");
	
	else if (per >= 70 && per < 80)
	printf ("\n Grade C ");
	
	else if (per >= 60 && per < 70)
	printf("\n Grade D ");
	
	else if (per >= 40 && per < 60)
	printf("\n Grade E ");
	
	else 
	printf("\n Grade F ");
	
	
}
