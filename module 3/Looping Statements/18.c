#include<stdio.h>
main(){
	int table;
	int i;
	printf("Enter Number of Table:");
	scanf("%d",&table);
	
	for(i=1;i<=10;i++){
		printf("%d*%d = %d\n",table,i,table*i);
	}
}
