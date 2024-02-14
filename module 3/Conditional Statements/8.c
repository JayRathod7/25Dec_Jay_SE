#include<stdio.h>
main(){
	float height;
	printf("Enter Your height in centimeters:");
	scanf("%f",&height);
	
	if(height<150){
		printf("according to chart you are short");
	}else if(height>=150 && height<=165){
		printf("according to chart your Average height");
	}else if(height>=165 && height<=195){
		printf("according to chart you are Tall");
	}else{
		printf("according to chart your Abnormal height");
	}
}

