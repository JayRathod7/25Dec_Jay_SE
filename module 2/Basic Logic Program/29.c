#include<stdio.h>
main(){
	
	int sec;
	int minutes;
	int hours;
	
	printf("Enter minutes:");
	scanf("%d",&minutes);
	
	sec = 60*minutes;
	printf("minutes in to second is:%d",sec);
	
	hours = minutes/60;
	printf("\nminutes in to hours is:%d",hours);
	
}
