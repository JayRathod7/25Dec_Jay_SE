#include<stdio.h>
main(){
	int i =0;
	char str[100];
	int  alp =0;
	int dig =0;
	int sChar =0;
	
	
	printf("Enter Your String:");
	scanf("%s",str);
	
	for(i;str[i]!='\0';i++){
		if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z')){
			alp++;
		}else if((str[i]>='0' && str[i]<='9')){
			dig++;
		}else{
			sChar++;
		}
	}
	printf("Alphabets Numbers:%d\n",alp);
	printf("Digits Numbers:%d\n",dig);
	printf("Special Characters Numbers:%d\n",sChar);
	
	
}
