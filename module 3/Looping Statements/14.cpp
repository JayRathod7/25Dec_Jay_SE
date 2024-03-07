#include<stdio.h>
main(){
	int fact  = 1;
	int number[5];
	int i;
	
	for(int i=0;i<5;i++){
		printf("Enter Number:");
		scanf("%d",&number[i]);
}


	for(int i=0;i<5;i++){
		fact = 1;
		for(number[i];number[i]>=1;number[i]--){
			fact = fact*number[i];
		}
		
		printf("Factorial Number is:%d\n",fact);
		
	}
}
