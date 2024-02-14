#include<stdio.h>
main(){
	int num1;
	int num2;
	char ch;
	int sum;
	
	printf("Enter Number 1:");
	scanf("%d",&num1);
	printf("Enter Number 2:");
	scanf("%d",&num2);
	
	printf("Enter Enter Opration +,-,*,/:");
	scanf(" %c",&ch);
    
	
	
	if(ch == '+'){
		sum  = num1+num2;
			printf("Your Sum is:%d",sum);
	}else if(ch == '-'){
		sum  = num1-num2;
			printf("Your substraction is:%d",sum);
	}
	else if(ch == '*'){
	sum  = num1*num2;
			printf("Your multiflication is:%d",sum);
	}
	else if(ch == '/'){
		sum  = num1/num2;
			printf("Your Sum is:%d",sum);
	}else{
		printf("Something went wrong");
	}
	
//	switch(ch){
//			case'+':
//			sum  = num1+num2;
//			printf("Your Sum is:%d",sum);
//			break;
//			
//			case'-':
//				sum  = num1-num2;
//			printf("Your substraction is:%d",sum);
//			break;
//			
//			case'*':
//				sum  = num1*num2;
//			printf("Your multiflication is:%d",sum);
//			break;
//			
//			case'/':
//			
//			break;
//			
//			default:
//				printf("Something went wrong");
//			
//	}
}
