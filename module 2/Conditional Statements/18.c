#include<stdio.h>
main(){
	int cost;
	int sell;

	printf("Enter Cost Of Your Product:");
	scanf("%d",&cost);
	printf("Enter Sell Price of Your Product:");
	scanf("%d",&sell);
	
	if(cost<sell){
		printf("\n%d You have profit On your product",sell-cost);
	}else{
		printf("\n%d You have Loss On your product",sell-cost);
	}
}
