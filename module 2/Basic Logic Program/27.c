#include<stdio.h>
main()
{
	int day;
	int month;
	
	printf("Enter Days:");
	scanf("%d",&day);
	
	month = day*0.032855;
	
	printf("convert %d days to months:%d",day,month);
}
