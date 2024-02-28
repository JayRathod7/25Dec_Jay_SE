#include<stdio.h>
main(){
	int i =1;
	int number;
	int f =1;
	printf("Enter a Number and given factorial number:");
	scanf("%d",&number);
	while(i<=number){
		f = f*i;
		i++;
	}
	printf("%d",f);
}
