#include<stdio.h>
main(){
	int i = 1;
	int number;
	printf("Enter Number :");
	scanf("%d",&number);
	printf("----Table----\n");
	while(i<=10){
		printf("%d*%d=%d\n",number,i,number*i);
		i++;
	}
}
