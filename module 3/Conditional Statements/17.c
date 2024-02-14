#include<stdio.h>
main(){
	
	int a;
	int b;
	int c;
	int final;
	
	printf("Enter A angles:");
	scanf("%d",&a);
	printf("Enter B angles:");
	scanf("%d",&b);
	printf("Enter C angles:");
	scanf("%d",&c);

	final = a+b+c;
	if(final == 180){
		printf("Valid Triangle");
	}else{
		printf("Not Valid Triangle");
	}	
	
}
