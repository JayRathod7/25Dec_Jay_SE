#include<stdio.h>
main(){
	int a;
	int b;
	int c;
	 
	 printf("Enter Number of A:");
	scanf("%d",&a);
	printf("Enter Number of B:");
	scanf("%d",&b);
	printf("Enter Number of C:");
	scanf("%d",&c);
	
	if(a>b && a>c){
		printf("%d is large",a);
	}else if(b>c){
        printf("%d is large",b);
	}else{
		printf("%d is large",c);
	}
}
