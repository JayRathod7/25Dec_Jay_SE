#include<iostream>

using namespace std;

class Calculation{
	
	public:
	double num1;
	double num2;
	double multi;
	double cubic;
	
	void GetData();
	void FindmultiData();
	void FindCubicData();
};

inline void Calculation :: GetData(){
	cout<<"\nEnter Value Of Number 1:";
	cin>>num1;
	cout<<"\nEnter Value Of Number 2:";
	cin>>num2;
}

inline void Calculation :: FindmultiData(){
	
	cout<<"\nMultiplication Value is:"<<num1*num2;
}

inline void Calculation :: FindCubicData(){
	cout<<"\nCubic Value Of Number 1:"<<num1*num1*num1;
	cout<<"\nCubic Value Of Number 1:"<<num2*num2*num2;	
 }
 
 
 main(){
 	Calculation cal;
 	cal.GetData();
 	cal.FindmultiData();
 	cal.FindCubicData();

 }
