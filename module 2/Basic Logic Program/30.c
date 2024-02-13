#include<stdio.h>
main()
{
	int days;
	int years;
	printf("Enter years:");
	scanf("%d",&years);
	days = years*365;
	printf("year in to days is:%d",days);
	printf("\nEnter Days:");
	scanf("%d",&days);
	years = days/365;
	printf("days in to Years is:%d",years);
}
