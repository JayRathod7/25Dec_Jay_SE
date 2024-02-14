#include<stdio.h>

main()
{
	int year;
	
	printf("Enter Year:");
	scanf("%d",&year);
	
	if(year%400 == 0){
	printf("%d is Leap Year",year);
	}else if(year%100 == 0){
	printf("%d is not Leap Year",year);
	}else if(year%4 == 0){
	printf("%d is Leap Year",year);	
	}else{
	printf("%d is not Leap Year",year);
	}
}

