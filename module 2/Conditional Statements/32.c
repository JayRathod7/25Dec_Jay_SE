#include<stdio.h>
main(){
	int basic_salary;
	int HRA;
	int DA;
	int final_salary;
	printf("Enter Basic Salary:");
	scanf("%d",&basic_salary);
	
	if(basic_salary<=10000){
		HRA =20;
		DA = 80;
		HRA = basic_salary*HRA/100;	
		DA = basic_salary*DA/100;
		final_salary = basic_salary+HRA+DA;
		printf("HRA is :%d\nDA is:%d",HRA,DA);
		printf("\nGross Salary is:%d",final_salary);
	}else if(basic_salary<= 20000){
		HRA =25;
		DA = 90;
		HRA = basic_salary*HRA/100;	
		DA = basic_salary*DA/100;
		final_salary = basic_salary+HRA+DA;
		printf("HRA is :%d\nDA is:%d",HRA,DA);
		printf("\nGross Salary is:%d",final_salary);
	}else if(basic_salary>20000){
		HRA =30;
		DA = 95;
		HRA = basic_salary*HRA/100;	
		DA = basic_salary*DA/100;
		final_salary = basic_salary+HRA+DA;
		printf("HRA is :%d\nDA is:%d",HRA,DA);
		printf("\nGross Salary is:%d",final_salary);
	}else{
		printf("\nBhai Itni Salary company me Kisiko nhai dete hai..");
	}
}
