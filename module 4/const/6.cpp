#include<iostream>
using namespace std;

class employee{

	  private:
	  	char name[5][20];
	  	int id[10];
	  	int salary[10];
	  	int star[10];
	  	int number;
	  	int i;
	  	
	  	
	  	public:
	  	 employee(){
	  		cout<<"Enter Number Of Employee:";
	     	cin>>number;
	  		for(i = 1;i<=number;i++){
	  			cout<<"=========="<<i<<"==========\n";
	  			cout<<"Enter Employee Name:";
	  			cin>>name[i];
	  			cout<<"Enter Employee Id:";
	  			cin>>id[i];
	  			cout<<"Enter Employee Salary:";
	  			cin>>salary[i];
	  			cout<<"Enter Employee Rating (0 to 5):";
	  			cin>>star[i];
	  			if(star[i]<0 || star[i]>5){
			   		  printf("\nPlease Selecte valid Number.\n");
			   		  break;
			      }
			      
			  }
			  
			  for(i=1;i<=number;i++){
			  	
 	  			if(star[i]<0 || star[i]>5){
			   		  printf("\nPlease Selecte valid Number.\n");
			   		  break;
			      }
			      cout<<"\n==========Employee no "<<i<<"=========="; 
 					 	cout<<"\nEmployee Name= "<<name[i];
						cout<<"\nEmployee ID= "<<id[i];
						cout<<"\nEmployee Performance= "<<star[i]; 	
						
			if(star[i] == 1)
			{
				salary[i]=salary[i]+1000;
				cout<<"\nEmployee Salary= "<<salary[i];
			}
			else if(star[i] == 2)
			{
				salary[i]=salary[i]+2000;
				cout<<"\nEmployee Salary= "<<salary[i];
			}
			else if(star[i] == 3)
			{
				salary[i]=salary[i]+3000;
				cout<<"\nEmployee Salary= "<<salary[i];
			}
			else if(star[i] == 4)
			{
				salary[i]=salary[i]+4000;
				cout<<"\nEmployee Salary= "<<salary[i];
			}
			else if(star[i] == 5)
			{
				salary[i]=salary[i]+5000;
				cout<<"\nEmployee Salary= "<<salary[i];
			}else{
				cout<<"\nEmployee Salary= "<<salary[i];
			}	
								  		 
			  }
			 
		}
		
};

main(){
	employee emp;
}
