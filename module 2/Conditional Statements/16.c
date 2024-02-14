#include<stdio.h>
main(){
	int temp;
	printf("Enter temperature in centigrade:");
	scanf("%d",&temp);
	
	if(temp<0){
		printf("Very Freezing Weather");
	}else if(temp>0 && temp<=10){
		printf("Very Cold Weather");
	}else if(temp>=11 && temp<=20){
		printf("Cold Weather");
	}else if(temp>=21 && temp<=30){
		printf("Normal weather");
	}else if(temp>=31 && temp<=40){
		printf("Hot Weather");
	}else if(temp>=41)
		{
		printf("Very Hot weather");
	}
	
}

