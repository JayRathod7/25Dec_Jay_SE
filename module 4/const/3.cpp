#include<iostream>
using namespace std;

class Car{
	private:
		char company[30];
		char model[20];
		int year;
		
	public:
		   void getData(){
		   	cout<<"Enter Car Company Name:";
		   	cin>>company;
		   	cout<<"Enter Car Model:";
		   	cin>>model;
		   	cout<<"Enter Car Model Year:";
		   	cin>>year;
		   }	
		   
		   void printData(){
		   	cout<<"\nCar Company Name is:"<<company;
		   	cout<<"\nCar Model is:"<<model;
		   	cout<<"\nCar Model Year is:"<<year;
		   }	   
};

main(){
	Car car;
	car.getData();
	car.printData();
}
