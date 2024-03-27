#include<iostream>

using namespace std;

class Students{
	
	public:
	int rollnumber[10];
	int i;
	int number;
	
	void getNumber(){
		cout<<"Enter Number of Student:";
		cin>>number;
		cout<<"\n";
		for(i =1; i<=number;i++){
			cout<<"["<<i<<"]Enter Student Roll Number:";
			cin>>rollnumber[i];
		}
		cout<<endl;
	}
};

class Test :public Students{
	public:
	  int subject1[10];
	  int subject2[10];
	  int totle[10];
	  	
	  	void marks(){
	  		cout<<"\n";
	  		for(i = 1;i<=number;i++){
	  		cout<<"["<<rollnumber[i]<<"]Enter Subject 1 Mark:";
	  		cin>>subject1[i];
	  		cout<<"["<<rollnumber[i]<<"]Enter Subject 2 Mark:";
	  		cin>>subject2[i];
	  		totle[i] = subject1[i]+subject2[i];
		  }
		  }
};

class Result :public Test{
	
	public:
		void final_result(){
			cout<<"\n===========Result==========\n";
			for(i =1;i<=number; i++){
				cout<<"Student Roll Number:\t"<<rollnumber[i]<<endl;
				cout<<"Subject 1 Mark is:\t"<<subject1[i]<<endl;
				cout<<"Subject 2 Mark is:\t"<<subject2[i]<<endl;
				cout<<"Totle Marks:\t\t"<<totle[i]<<endl;
			}
		}
};

main(){
	
	Result rt;
	rt.getNumber();
	rt.marks();
	rt.final_result();
}
