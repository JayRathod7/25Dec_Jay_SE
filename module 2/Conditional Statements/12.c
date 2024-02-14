#include<stdio.h>
main(){
	int a;
	int b;
	int c;
	int max;
	
	printf("Enter Number of A:");
	scanf("%d",&a);
	printf("Enter Number of B:");
	scanf("%d",&b);
	printf("Enter Number of C:");
	scanf("%d",&c);
	
	
	//a>b ? a>c ? printf("A is MAX Number"):printf("C is MAX Number"): b>c ? printf("B is MAX Number"):("C is MAX Number"); 
	max = a>b?a>c?a:c : b>c? b:c;
	printf("MAX Number is:%d",max);
}
