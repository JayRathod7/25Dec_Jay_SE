//1 + 2 + 3 + 4 + 5 + ... + n

#include<stdio.h>
main(){
	int number;
	int sum =0;
	
	printf("Enter Number:");
	scanf("%d",&number);
	 
	for(int i=1; i<=number;i++){
		printf("%d",i);
		
		if(i != number){
			printf("+");
		}
		
		sum = sum+i;
	}
	printf("=%d",sum);
}




