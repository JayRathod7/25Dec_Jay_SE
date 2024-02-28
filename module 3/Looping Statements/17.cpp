#include<stdio.h>
main(){
	int i = 1;
	int number[10];
	
	while(i<=5){
		printf("Enter 5 Number and check Odd or Even:");
		scanf("%d",&number[i]);
		i++;	
	}
	
	printf("Even Numbers:\n");
	i =1;
	while(i<=5){
		if(number[i]%2==0){
			printf("Even Number is:%d\n",number[i]);
		}
		i++;	
	}

	printf("Odd Numbers:\n");
	i =1;
	while(i<=5){
		if(number[i]%2!=0){
			printf("Odd Number is:%d\n",number[i]);
		}
		i++;	
	}
}
