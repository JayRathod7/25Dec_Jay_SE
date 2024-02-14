#include<stdio.h>
main(){
	int marks;
	printf("Enter Your marks of subject:");
	scanf("%d",&marks);
	
	if(marks>=40){
		printf("Congratulation... Your Are PASS");
	}else{
		printf("Sorry... Your Are FAIL");
	}
}
