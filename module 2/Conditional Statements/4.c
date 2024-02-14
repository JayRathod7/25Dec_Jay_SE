#include<stdio.h>
main(){
	int num1;
	int num2;
	char ch;
	
	printf("Enter num1:");
	scanf("%d",&num1);
	printf("Enter num2:");
	scanf("%d",&num2);
	
	printf("Enter option :+,-,*,/\n");

	scanf(" %c",&ch);
	
	if(ch == '+'){
	    printf("sum is:%d", num1+num2);
	}else if(ch=='-'){
	    printf("sub is:%d", num1-num2);
	}else if(ch == '*'){
		printf("mul is:%d",num1*num2);
	}else if(ch == '/'){
		printf("div is:%d",num1/num2);
	}else{
		printf("ENter valid option");
	}
}
