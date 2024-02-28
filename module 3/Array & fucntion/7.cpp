#include<stdio.h>
#include<string.h>
main(){
	int number =0;
	char str[100];
	int len =0;
	
	printf("Enter String:");
	gets(str);
	
	len = strlen(str);
	
	for(int i =0;i<=len;i++){
		number++;
	}
	
	printf("String Lenth is:%d",number);
	
}
