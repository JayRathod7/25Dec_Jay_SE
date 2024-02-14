#include<stdio.h>
main(){
	int weekNumber;
	printf("Enter Week Number:");
	scanf("%d",&weekNumber);
	
	switch(weekNumber){
		case 1: printf("This is Monday");
		break;
		case 2: printf("This is Tuesday");
		break;
		case 3: printf("This is Wednesday");
		break;
		case 4: printf("This is Thursday");
		break;
		case 5: printf("This is Friday");
		break;
		case 6: printf("This is Saturday");
		break;
		case 7: printf("This is Sunday");
		break;
		default: printf("Please Enter Valid Number(1-7)");
		
	}
}
