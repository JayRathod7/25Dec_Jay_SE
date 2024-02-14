#include<stdio.h>
main(){
	int a;
	int b;
	int c;
	int min;
	
	
	printf("Enter Number of A:");
	scanf("%d",&a);
	printf("Enter Number of B:");
	scanf("%d",&b);
	printf("Enter Number of C:");
	scanf("%d",&c);
	
	
	//a<b ? a<c ? printf("A is Min Number"):printf("C is Min Number"): b<c ? printf("B is Min Number"):("C is Min Number"); 
	min = a<b?a<c?a:c : b<c? b:c;
	printf("Min Number is:%d",min);
	
}
