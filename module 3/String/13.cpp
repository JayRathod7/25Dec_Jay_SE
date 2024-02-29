#include<stdio.h>
#include<string.h>

main(){
	char str[100];
	int number;
	int i;
	char ch;
	
	
	
	printf("Enter Your String with Alphabets digits or symoly:");
	gets(str);
	
	for(i = 0; str[i]!= '\0';i++){
		if((str[i]>='A' && str[i]<='Z') ||  (str[i]>='a' && str[i]<='z')){
			printf("%c",str[i]);
		}else{
			str[i]=0;
		}
	}
}

