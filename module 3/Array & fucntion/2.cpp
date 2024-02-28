#include<stdio.h>
#include <stdlib.h>


void sum(float a,float b){
	printf("\nSum Ans Is:%.2f",a+b);
}
void sub(float a,float b){
	printf("\nSubtraction Ans Is:%.2f",a-b);
}
void mul(float a,float b){
	printf("\nMultiplication Ans Is:%.2f",a*b);
}
void divide(float a,float b)
	{printf("\nDivide Ans Is:%.2f",a/b);
}

main(){
	
	int ch;
	float number1;
	float number2;
	
	printf("1) +\n2) -\n3) *\n4) /\nEnter Number:");
	scanf("%d",&ch);
	
		if(ch<1||ch>4){
		printf("Please Enter Valid Number");
		exit(0);
	}
	printf("Enter First Number:");
	scanf("%f",&number1);
	
	printf("Enter Second Number:");
	scanf("%f",&number2);
	

	
	switch(ch){
		case 1:sum(number1,number2); break;
		case 2:sub(number1,number2);break;
		case 3:mul(number1,number2);break;
		case 4:divide(number1,number2);break;
		default:;
	}
	
}

