#include<stdio.h>
main(){
	int i;
	int number;
	int final = 0;
	int a;

	
	printf("Enter 3 Numbers:");
	scanf("%d",&i);
	a =i;
	
	while(i>0){
		final = (final*10)+i%10;
		i = i/10;
	}
	
	if(a == final){
		printf("Number is palindrome");
	}else{
		printf("Not Palindrome Number");
	}
}
