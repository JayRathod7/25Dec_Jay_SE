#include<stdio.h>
main(){
	int salary;
	int PF;
	int net_salary;
	int TDS;
	int DA;
	int TA;
	int annual_salary;
	
	printf("Enter Your Gross Salary:");
	scanf("%d",&salary);
	
	printf("Enter PF(Provident Fund)in Percentage:");
	scanf("%d",&PF);
	PF = salary*PF/100;
	printf("PF(Provident Fund)Amount\t\t:\t-%d",PF);
	
	printf("\nEnter TDS(Tax Deducted at Source)in Percentage:");
	scanf("%d",&TDS);
	TDS = salary*TDS/100;
	printf("TDS(Tax Deducted at Source)Amount  :\t\t-%d",TDS);
	
	printf("\nEnter DA(Dearness Allowance)\t:\t\t+");
	scanf("%d",&DA);
	
	printf("Enter TA(Travel Alliance)\t:\t\t+");
	scanf("%d",&TA);
	
	net_salary=salary - PF -TDS +DA+TA;
	printf("\n\t\t\t\t\t\t---------");
	annual_salary = net_salary*12;
	printf("\nYour Monthly Salary is\t\t:\t\t%d\nYour Annual Salaray is\t\t:\t\t%d",net_salary,annual_salary );
}
