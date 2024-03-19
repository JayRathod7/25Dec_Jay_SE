#include<iostream>
using namespace std;

class Batsman{
	public:
		char name[10][50];
		long int totlerun[10];
		long int avgrun;
		int number;
		int i;
		int p;
		int nameindex[10];
		
		void inputdata(){
			cout<<"Enter Number of Cricketers:";
			cin>>number;
			cout<<"\n";
			
			for(i =1;i<=number;i++){
				cout<<"Enter Cricketers name:";
				cin>>name[i];
				nameindex[i]= i;
        		cout<<"Enter "<<name[i]<<" Totle Runs:";
				cin>>totlerun[i];
				cout<<"\n";
			}
		}
};
class Cricketer :public Batsman{
	
	public:
	void calavgrun(){
			for(i =1;i<=number;i++){
				avgrun += totlerun[i];
			}
			cout<<"\nTotle Runs:"<<avgrun;
			avgrun = avgrun/number;
			cout<<"\nAvrage Runs are:"<<avgrun;
		}
		
		void performance(){
			for(i =1; i<=number;i++){
				if(totlerun[0]<totlerun[i]){
					p = i;
					totlerun[0]=totlerun[i];
				}
			}
			cout<<"\n\n============BEST PERFORMERS============";
				for(i =1; i<=number;i++){
				if(nameindex[i] == p){
					cout<<"\nBest Performers name is:\t"<<name[i];	
					}
			}
			cout<<"\nBest Performers Runs:\t\t"<<totlerun[0];
		}
		
};

main(){
	Cricketer ct;
	ct.inputdata();
	ct.calavgrun();
	ct.performance();
}
