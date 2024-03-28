#include<iostream>

using namespace std;

class Calculate{
	public:
	void cal(int a ,int b){
		cout<<"\nthis is sum:"<<a+b;
	}
	void cal(double a, double b){
		cout<<"\nthis is substaction:"<<a-b;
	}
	void cal(int a, double b){
		cout<<"\nthis is multiflication:"<<a*b;
	}
	
	void cal(double a, int b){
		cout<<"\nthis is divition:"<<a/b;
	}
	
	
};

main(){
	Calculate calcu;
	
	calcu.cal(10,10);
	calcu.cal(10.2,2.5);
	calcu.cal(30,30.4);
	calcu.cal(100.2,20);
	
}
