#include<stdio.h>
main()
{
	int cus_id;
	int unit;
	char name[30];
	float final1,final2,final3,final4,final5;
	printf("Enter Your Customer ID:");
	scanf("%d", &cus_id);
	printf("Enter Customer Name:");
	scanf("%s", &name);
	printf("Enter Unit:");
	scanf("%d", &unit);
	printf("\n");
	final1=unit*1.20;
	final2=unit*1.50;
	final3=unit*1.80+(((unit*1.80)*18)/100);
	final4=unit*2.00+(((unit*1.00)*18)/100);
	
	if(unit<=350)
	{
		if(final1<=256)
		{
			printf("Total Amount to Paid:256.00");	
		}
		else if(unit<=350)
		{
			printf("Total Amount to Paid:%.2f", final1);
		}
	}
	else if(unit>350 && unit<=600)
	{
		if(final2>=800)
		{
			final5=final2+((final2*18)/100);
			printf("Total Amount to be Paid:%.2f", final5);
		}
		else
		{
			printf("Total Amount to be Paid:%.2f", final2);	
		}	
		
	}
	else if(unit>600 && unit<=800)
	{
		printf("Total Amount to be Paid:%.2f", final3);
	}
	else if(unit>800)
	{
		printf("Total Amount to be Paid:%.2f", final4);
	}else{
		printf("Something went wrong");
	}
	
	
}
