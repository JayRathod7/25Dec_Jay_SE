#include<stdio.h>

main(){
	char name[10][20];
	
	int i =1;
	while(i<=5){
		printf("Enter Your Name:");
		scanf("%s",&name[i]);
		i++;
	}
    i =1;
	while(i<=5){
			printf("Your Name Is:%s\n",name[i]);
			i++;
	}
	
	
	
}
