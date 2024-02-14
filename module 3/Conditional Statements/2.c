#include<stdio.h>
main(){
	int m;
	printf("Enter Any Value:");
	scanf("%d",&m);
	
	if(m>0){
		printf("N is 1");
	}else if(m<0){
		printf("N is -1");
	}else{
		printf("N is 0");
	}
}
