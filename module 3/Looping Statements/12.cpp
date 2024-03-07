#include<stdio.h>  
#include<math.h>


main(){
    
	int number;
	int r;
	int sum=0;
	int a;    
	
	
	printf("enter the number:");    
	scanf("%d",&number);    
	
	
	
    	a=number;  
		  
	while(number>0){    
 			r=number%10;    
        	sum=sum+(r*r*r);    
	        number=number/10;    
	}    
	printf("==========Using While Loop==========");
	if(a == sum){
		printf("\narmstrong  number ");    
	}else{
		printf("\nnot armstrong number");    
	}    
	
	
	
	

	for(int i = 0; i<number; i++){
			r=number%10;    
        	sum=sum+(r*r*r);    
	        number=number/10; 
	} 
	
	printf("\n==========Using For Loop==========");
	if(a == sum){
		printf("\narmstrong  number ");    
	}else{
		printf("\nnot armstrong number");    
	} 
	
	
}   
