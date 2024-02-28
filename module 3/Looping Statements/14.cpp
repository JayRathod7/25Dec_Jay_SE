#include<stdio.h>
main(){
	int fact  = 1;
	int number;
	
	for(int i=1;i<=5;i++){
		printf("Enter Number:");
		scanf("%d",&number);
		
		for(int j=1;j<=number;j++){
			fact = fact*j;
		}
		
		printf("Factorial Number is:%d\n",fact);
		fact = 1;
	}
}
