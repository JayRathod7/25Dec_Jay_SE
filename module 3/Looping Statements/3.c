#include<stdio.h>
main(){

	   int i;
	   int number[10];
	   int oddsum;
	   int evensum;
	   
	   while(i<=10){
	   printf("Enter Ten Numbers:");
	   scanf("%d",&number[i]);
	   i++;
	   }
	   
	   i=1;
	   while(i<=10){
	   	if(number[i]%2==0){
	   		printf("\nnumber is Even number:%d",number[i]);
	   		evensum += number[i];
		   }
		   i++;
	   }
	   printf("\n\n");
	   i = 1;
	   while(i<=10){
	   	if(number[i]%2!=0){
	   		printf("\nnumber is Odd number:%d",number[i]);
	   		oddsum += number[i];
		   }
		   i++;
	   }
	   
	    printf("\n\n");
	   printf("\nEven number sum:%d",evensum);
	   printf("\nOdd number sum:%d",oddsum);
	   

}
