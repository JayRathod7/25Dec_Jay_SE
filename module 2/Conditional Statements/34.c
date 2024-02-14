#include<stdio.h>
main(){
	int month_num;
	printf("Enter Month Number:");
	scanf("%d",&month_num);
	if(month_num ==1){
		printf("This Month is January");
	}else if(month_num ==2){
		printf("This Month is February");
	}else if(month_num ==3){
		printf("This Month is March");
	}else if(month_num ==4){
		printf("This Month is April");
	}else if(month_num ==5){
		printf("This Month is May");
	}else if(month_num ==6){
		printf("This Month is June");
	}else if(month_num ==7){
		printf("This Month is July");
	}else if(month_num ==8){
		printf("This Month is August");
	}else if(month_num ==9){
		printf("This Month is September");
	}else if(month_num ==10){
		printf("This Month is October");
	}else if(month_num ==11){
		printf("This Month is November");
	}else if(month_num ==12){
		printf("This Month is December");
	}else{
		printf("Please Enter Valid Number(1-12)");
	}
}
