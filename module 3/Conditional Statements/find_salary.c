#include<stdio.h>
main(){
	int salary;
	int PF = 4;
	int net_salary;
	int TDS = 6;
	int DA= 750;
	int TA = 500;
	int annual_salary;
	printf("Enter Your Gross Salary:");
	scanf("%d",&salary);
	
	PF = salary*PF/100;
   //printf("\nYoyr Pf Amout is:%d",pf);
	printf("\nPF(Provident Fund)\t:\t-%d",PF);
	
	TDS = salary*TDS/100;
	//printf("\nTaxDeducted at Source:%d",TDS);
	printf("\nTDS(Tax Deducted at Source)  :\t-%d",TDS);
	
	//DA = salary+DA;
    //	printf("\nDearness Allowance Amount is:%d",DA);
	printf("\nDA(Dearness Allowance)\t:\t+%d",DA);
	
	//TA = salary+TA;
   //printf("\nTravel Alliance Amount is:%d",TA);
    printf("\nTA(Travel Alliance)\t:\t+%d",TA);	
	
	net_salary=salary - PF -TDS +DA+TA;
	//printf("\nAfter Deduct Some Tax And Add Benifit Net Salary is:%d",net_salary) ;
	printf("\n\t\t\t\t---------");
	annual_salary = net_salary*12;
	printf("\nYour Monthly Salary is\t:\t%d\nYour Annual Salaray is\t:\t%d",net_salary,annual_salary );
	
	
	
	
	
	
}
