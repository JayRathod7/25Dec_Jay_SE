#include<iostream>
#include<string>
#include<cmath>

using namespace std;

class Event{
	
	public:
	string eventName;
	string name;
	int guestsnumber;
	int numberminutes;
	
	// inbuild cost for events
	double CostPerHour = 18.50;
	double CostPerMinute = .40;
	double CostOfDinner = 20.70;
	
	
	//for get client Details
	void getData(){
		cout<<"\n********************Event Management System********************"<<endl;
		cout<<"Enter the name of the Event:";
		getline(cin,eventName);
		cout<<"Enter the customer's first and last name:";
	     getline(cin,name);
		cout<<"Enter Number of Guests:";
		cin>>guestsnumber;
		cout<<"Enter the number of minutes in the event:";
		cin>>numberminutes;
	}
};



class GetServerCost :public Event{
	public:
		double server_re;
		double cost1;
		double cost2;
		double OneserverCost;
		
		//calculate number of server
		void server(){
			server_re = ceil(guestsnumber/20); //ceil function
		}
		
		//calculate cost server
		void cost_of_server(){
			cost1 = (numberminutes/60)*CostPerHour;
			cost2 = (numberminutes%60)*CostPerMinute;
			OneserverCost = floor(cost1+cost2);
		}
};


class GetFoodCost :public GetServerCost{
	
	public:
		double totleFoodCost;
		
		//calculate food cost for event
		void foodcost(){
			totleFoodCost = guestsnumber*CostOfDinner;
		}
};

class GetAvrgCost :public GetFoodCost{
	public:
		double Averagecost;
		double final_cost;
		
		void perpersoncost(){
			Averagecost = totleFoodCost/guestsnumber;
		}
		
		void final_cost_of_event(){
			final_cost = totleFoodCost+(OneserverCost*server_re);
		}
};

class GetDepositAmount :public GetAvrgCost{
	
	public:
		double amount;
		
		void depositAmount(){
			amount = final_cost*.25;
		}
};

class FinalEstimate :public GetDepositAmount{

	  	public:
	  		//final estimate data
		  void Data(){
		  	cout<<"\n====================Event Estimate For:"<<name<<"====================\n";
		  	cout<<"\nNumber Of Servers:\t"<<server_re;
		  	cout<<"\nThe Cost For Server:\t"<<OneserverCost;
		  	cout<<"\nThe Cost For Food is:\t"<<totleFoodCost;
		  	cout<<"\nAverage Cost Per Person:\t"<<Averagecost<<endl;
		  	cout<<"\nFinal Cost:\t"<<final_cost;
		  	cout<<"\nPleas Deposite a 25% Deposite To Reserve The Event";
		  	cout<<"\nThe Deposite Needed is:\t"<<amount;
		  }	
};



main(){
	FinalEstimate ev;
	ev.getData();
	ev.server();
	ev.cost_of_server();
	ev.foodcost();
	ev.perpersoncost();
	ev.final_cost_of_event();
	ev.depositAmount();
	ev.Data();
	
}
