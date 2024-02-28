#include<stdio.h>
main(){
	int i =1;
	int number;
	int f =1;
	
	printf("Enter Number:");
	scanf("%d",&number);
	
	for(i =1;i<=number;i++){
		f = f*i;
	}
	printf("%d Fact Number is:%d",number,f);
}
