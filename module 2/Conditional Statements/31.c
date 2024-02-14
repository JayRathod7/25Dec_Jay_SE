#include<stdio.h>
main(){
	int month;
	printf("Enter Number Of Month:");
	scanf("%d",&month);
	
	switch(month){
		case 1:
			printf("This Month is January And Number Of Days is 31");
			break;
		case 2:
			 printf("This Month is February And Number Of Days is 28 or 29");
			 break;	
	    case 3:
			 printf("This Month is March And Number Of Days is 31");
			 break;
	    case 4:
			 printf("This Month is April And Number Of Days is 30");
			 break;		 
	   case 5:
			 printf("This Month is May And Number Of Days is 31");
			 break;
	    case 6:
			 printf("This Month is June And Number Of Days is 30");
			 break;
		case 7:
			 printf("This Month is July And Number Of Days is 31");
			 break;
		case 8:
			 printf("This Month is August And Number Of Days is 31");
			 break;
		case 9:
			 printf("This Month is September And Number Of Days is 30");
			 break;
		case 10:
			 printf("This Month is October And Number Of Days is 31");
			 break;
		case 11:
			 printf("This Month is November And Number Of Days is 30");
			 break;
		case 12:
			 printf("This Month is December And Number Of Days is 31");
			 break;
		default:
			 printf("Pleas Enter Valid Number");	  	 	 	 	 	 	 	 	 
	}
}
