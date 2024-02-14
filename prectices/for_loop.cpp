#include<stdio.h>
main(){
	
	int number[10];
	int i=1;
	int odd =0;
	int even =0;
	
	for(i;i<=10;i++){
		printf("Enter Your Number:");
		scanf("%d",&number[i]);
	}
	
	
	printf("Odd Number is\n");
	for(i=1;i<=10;i++){
		if(number[i]%2 != 0){
			printf("odd number is:%d\n",number[i]);
			odd = odd+number[i];
		}
	}
	printf("Even Number is\n");
	for(i=1;i<=10;i++){
		if(number[i]%2 == 0){
			printf("Even number is:%d\n",number[i]);
			even = even+number[i];
		}
	}
	printf("odd number sum is:%d\n",odd);
	printf("even number sum is:%d\n",even);
	
}
