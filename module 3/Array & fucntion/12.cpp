#include<stdio.h>
main(){
	
	int i = 0;
	char str[5][20];
	
	
	for(i=0;i<5;i++){
		printf("Enter Student Name:");
		scanf("%s",str[i]);
	}
	
	for(i=0;i<5;i++){
		printf("Name is:%s\n",str[i]);
	}
}
