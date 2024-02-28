#include<stdio.h>
main(){
	
	int number;
	
	printf("Enter Number:");
	scanf("%d",&number);
	
	for(int i =1;i<=number;i++){
		printf("%d/%d",i,i+1);	
		if(i != number){
			if(i%2 != 0){
				printf(" - ");
			}else {
				printf(" + ");
			}
		}
	}
}
