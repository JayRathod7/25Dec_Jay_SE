#include<stdio.h>
main(){
	int number[100];
	int i=0;
	int number_of_digit;
	int max;
	
	printf("How many numbers you want to enter:");
	scanf("%d",&number_of_digit);
	
	printf("\nEnter a number:");
	
		for(i =0;i<number_of_digit; i++){
			
         	scanf("%d",&number[i]);
	}
	
	for(i =0;i<number[i]; i++){
		
		if(number[0]<number[i]){
			number[0]= number[i];
			max = number[0];
		}
	}
	printf("\n max number is: %d",max);
}
