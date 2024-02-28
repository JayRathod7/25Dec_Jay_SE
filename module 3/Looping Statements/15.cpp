#include<stdio.h>
main(){
	int number;
	int sum =0;
	int i;
	
	while(i<=10){
		printf("+%d",i);
		sum = sum+i;
		i++;
	}

	printf(" = %d",sum);
	
	
}
