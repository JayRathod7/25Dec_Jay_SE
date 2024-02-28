#include<stdio.h>
main(){
	
	int number;
	printf("Enter Number:");
	scanf("%d",&number);
	
	for(int i =1;i<=number;i++){
		printf("(");
		for(int j=1;j<=i;j++){
			if(j==1){
				printf("1");
			}else{
				printf("+%d",j);
			}
		}
		printf(")");
		if(i!=number){
			printf("+");
		}
	}
	
	
}
