#include<stdio.h>
main(){
	int i=1;
	int number[5];
	
	while(i<=5){
		printf("Enter number:");
		scanf("%d",&number[i]);
		i++;
	}
     	i=1;
	while(i<=5){
		printf("Your Number is:%d\n",number[i]);
        i++;
	}
}
