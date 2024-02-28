#include<stdio.h>
#include<string.h>

main(){
	char str1[100];
	char str2[100];
	
	printf("Enter Your First String:");
	scanf("%s",str1);
	
	printf("First String is:%s\n",str1);
	strcpy(str2,str1);
	
	printf("After copy String :%s\n",str2);
}
