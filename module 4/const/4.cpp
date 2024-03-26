#include<iostream>
using namespace std;

class Bank{
	private:
		long int accountnumber;
		long int balanc = 99000;
		long int deposit;
		long int withdraw;
	
	
		
	public:
		void getDetails(){
			cout<<"Enter Your 8 Digit Account Number:";
			cin>>accountnumber;
		}
		
		void depositData(){
			cout<<"Enter Your Deposit Amount:";
			cin>>deposit;
			balanc = deposit + balanc;
		}
		
		void withdrawData(){
			cout<<"Enter Your Withdraw Amount:";
			cin>>withdraw;
			
			if(balanc<=withdraw){
					cout<<"\ninsufficient balance";
			}else{
				balanc = balanc - withdraw;
			}
		}
		
		void details(){
			 cout<<"\nYour Acount Number is:"<<accountnumber;
			 cout<<"\nBalance:"<<balanc;
		}
};

main(){
	Bank bank;
	
	bank.getDetails();
	bank.depositData();
	bank.withdrawData();
	bank.details();
}
