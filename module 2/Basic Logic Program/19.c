#include<stdio.h>
#include<math.h>
main(){
	double salary;
	double interestrate;
	double year;
	double final;
	
	
	printf("Enter Your salary:");
	scanf("%lf",&salary);
	printf("Enter Interest rate:");
	scanf("%lf",&interestrate);
	printf("Enter Your year:");
	scanf("%lf",&year);
	
	final = salary*(pow(1+ (interestrate/100),year));
	printf("compound interest is:%.2lf",final);
	
	
}
