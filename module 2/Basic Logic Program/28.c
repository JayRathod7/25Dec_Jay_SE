#include<stdio.h>
main(){
	int days;
	int months;
	int year;
	
	printf("Enter Years:");
	scanf("%d",&year);
	days = year*365;
	printf("days is:%d",days);
	months = year*12;
	printf("\n Months is:%d",months);
}
