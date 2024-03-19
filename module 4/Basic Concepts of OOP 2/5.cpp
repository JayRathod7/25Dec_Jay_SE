#include<iostream>
using namespace std;

class Person{
	
	private:
		char name[20];
		int age;
		char country[20];
		
	public:
		void getdata(){
			cout<<"Enter Your Name:";
			cin>>name;
			cout<<"Enter Your Age:";
			cin>>age;
			cout<<"Enter Your Country:";
			cin>>country;
		}
		void printdata(){
			cout<<"\nYour Name:\t"<<name;
			cout<<"\nYour Age:\t"<<age;
			cout<<"\nYour Country:\t"<<country;
		}
};


main(){
	Person person;
	person.getdata();
	person.printdata();
}
