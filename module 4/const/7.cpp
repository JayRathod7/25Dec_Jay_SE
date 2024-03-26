#include<iostream>
using namespace std;

class Date{
	private:
		int day;
		int month;
		int year;
		
	public:
	    void getData(){
	    	cout<<"Enter Day:";
	    	cin>>day;
	    	cout<<"Enter Month:";
	    	cin>>month;
	    	cout<<"Enter Year:";
	    	cin>>year;
		}		
		
		void checkvalidDate(){
			if(month == 1|| month == 3 || month == 5 || month == 7 || month ==8||month == 10 || month == 12){
				if(day<=31 && day>=1){
					cout<<day<<"-";
				}else{
					cout<<"Pleas Enter Valid Date";
				}
			}else if(month == 4|| month == 6 || month == 9 || month == 11){
				if(day<=30 && day>=1){
					cout<<day<<"-";
				}else{
					cout<<"Pleas Enter Valid Date";
				}
			}else if(month ==2 ){
				if(day<=29 && day>=1){
					cout<<day<<"-";
				}else{
					cout<<"Pleas Enter Valid Date";
				}
			}
				if (month <=12 && month >=1)	{
	            	cout<<month<<"-";
				}
				else{
					cout<<"\nError! Enter valid Month\n";
				}
				cout<<year;
			
		}
};

main(){
	Date date;
	date.getData();
	date.checkvalidDate();
}
