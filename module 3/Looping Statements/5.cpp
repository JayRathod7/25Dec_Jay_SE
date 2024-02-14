#include<stdio.h>
main(){
	int i =1;
	int j =1;
	int number;
	while(i<=10){
		printf("Enter 10 Numbers:");
		scanf("%d",&number);
	    i++;
	    if(number%2 == 0){
		printf("%d is Even Number\n",number);
	    }else{
		printf("%d is Odd Number\n",number);
	     }
	}
	
	
}
