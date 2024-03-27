#include<iostream>
#include<ctime>

using namespace std;

class DateORTime{
	
	public:
		time_t now = time(0);
		char* date_time = ctime(&now);
		
		int a_pin = 12345; 
		int enter_pin;
		char exit_key;
		
		void getDateandTime(){
			cout<<"#################### WELCOME TO ATM ####################\n\n";
			cout<<"--------------------"<<"\n\n";
			cout<<"Current Date : "<< date_time;
			cout<<"\n--------------------\n\n";
			cout<<"########################################\n";
	        cout<<"########################################\n\n";
		}
		
		void checkmenu(char number){
			cout<<"Press 1 and then Press Enter to Access Your Account Via Pin Number\n Or \nPress 0 and press Enter To get help.";
			cin>>number;
		}
		
		void ifEnter1(){
			cout<<"#################### ATM ACCONT ACCESS ####################\n\n";
			cout<<"Enter YOur Acount pin number! [Only one attempt is allowed]";
			cin>>enter_pin;
			if(enter_pin == a_pin){
				
			}else{
				cout<<"#################### THANK YOU ####################\n\n";
				cout<<"You had made your attempt which failed!!! No More Attempts allowed!! SORRY!!";
				cout<<"########################################\n";
				cout<<"Press any key to Exit";
				cin>>exit_key;
				if(!exit_key){
					
				}else{
					exit(0);
				}
			}
		}
};

main(){
	   DateORTime dt;
	   char number;
	   dt.getDateandTime();
	   dt.checkmenu(number);
	   if(number == 1){
				dt.ifEnter1();
			}else if(number ==0){
				
			}
	   	
}
