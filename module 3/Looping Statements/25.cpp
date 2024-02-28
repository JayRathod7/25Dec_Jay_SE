//(1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n)


#include<stdio.h>
main(){
	int number;
	int sum =0;
	
	printf("Enter Number:");
	scanf("%d",&number);
	 
	for(int i=1; i<=number;i++){
		printf("(%d*%d)",i,i);
		
		if(i!=number){
			printf("+");
		}
		
		sum = sum+(i*i);
	}
	
	printf(" = %d",sum);
}
