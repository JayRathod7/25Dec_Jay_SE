#include<stdio.h>
main(){
	int check_num;
	printf("Enter Number in Positive or Nagative:");
	scanf("%d",&check_num);
	
	if(check_num > 0){
		printf("%d is Positive Number",check_num);
	}else {
		printf("%d is Nagative Number",check_num);
	}
}
