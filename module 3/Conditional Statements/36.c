
#include<stdio.h>
main()
{
	float i;
	float j =0;
	float k;
	float l;
	float m;
	float n;
	
	printf("Enter Electricity unit:");
	scanf("%f", &i);
	
	if(i<50){
		j=i*0.50;
		n = j+((j*20)/100);
		printf("Electricity Bill is:%.2f",n);
	}
	else if(i<150 && i>=50){
		k=25+((i-50)*0.75);
		n = k+((k*20)/100);
		printf("Electricity Bill is:%.2f",n);
	}
	else if(i<250 && i>=150){
		l=25+75+((i-150)*1.20);
		n=l+((l*20)/100);
		printf("Electricity Bill is:%.2f",n);	
	}
	else if(i>=250){
		m=25+75+120+((i-250)*1.20);
		n=m+((m*20)/100);
		printf("Electricity Bill is:%.2f",n);
	}else{
		printf("Something went wrong");
	}
}
