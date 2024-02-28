#include<stdio.h>
main(){
	
	char str1[100];
	char str2[100];
	
	printf("Enter Your First String:");
	scanf("%s",str1);
	printf("Enter Your Second String:");
	scanf("%s",str2);
	
	printf("\n");
	if(str1 == str2){
		printf("Your %s and %s Are Same",str1,str2);
	}else{
		printf("Your %s and %s Are NoT Same",str1,str2);
	}
}
