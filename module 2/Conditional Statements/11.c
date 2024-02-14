#include<stdio.h>
main(){
	int number;
	printf("Enter Number:");
	scanf("%d",&number);
	
	number%2 == 0 ? printf("%d Number is Even",number):printf("%d Number is Odd",number);  
}
