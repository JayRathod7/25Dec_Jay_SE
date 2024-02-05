#include<stdio.h>

void Menu(){
	   printf("---------------Menu---------------");	
	   printf("\n1.Pizza\t\t price = 180rs/pcs\n");
	   printf("2.Burger\t price = 100rs/pcs\n");
	   printf("3.Dosa\t\t price = 120rs/pcs\n");
	   printf("4.Idli\t\t price = 50rs/pcs\n");	   
}

int main(){
      int choice;
	  int quantity;
	  int amount;
	  int totalbill=0;
      char ch;
      Menu();
  do
  {
    printf("Pleas Enter Your Choose... :");
    scanf("%d",&choice);
       
    if(choice == 1){
		printf("\nYour Have Selected Pizza.");
   	}else if(choice == 2){
		printf("\nYour Have Selected Burger.");
	}else if(choice == 3){
		printf("\nYour Have Selected Dosa.");
	}else if(choice == 4){
		printf("\nYour Have Selected Idli.");
	}
      if(choice < 1 || choice > 4)
		 {
   		  printf("\nPlease Selecte valid Number.\n");
    	  break;
 		 }

  printf("\nEnter Quantity number :");
  scanf("%d",&quantity);
  getchar(); 

  switch (choice)
  {
   case 1:
	   amount = quantity*180;
	   printf("\nAmount:%d",amount);
	   totalbill += quantity * 180 ;
   break;
   case 2:
	   amount = quantity*100;
	   printf("\nAmount:%d",amount);
	   totalbill += quantity * 100;
   break;
   case 3:
 	   amount = quantity*120;
       printf("\nAmount:%d",amount);
       totalbill += quantity * 120 ;
   break;
   case 4:
	   amount = quantity*50;
	   printf("\nAmount:%d",amount);
	   totalbill += quantity * 50 ;
   break;
   default:
   break;
  }
		printf("\n===============Total===============\n");
   		printf("your total bill is %d\n" , totalbill);    
		printf("\nDo you want to place more order : Y or N : ");
		scanf(" %c", &ch);

if(ch=='y' || ch=='Y'){
    Menu();
}else{
	printf("\n==========Thanks You==========");
}
  } while(ch=='y' || ch=='Y');   
    
     return 0; 
}
