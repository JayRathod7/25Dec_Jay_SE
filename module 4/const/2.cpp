#include<iostream>

using namespace std;
class calculate{
	public:
		 calculate(int num1,int num2){
			
			cout<<"==========CALCULATE==========";
			cout<<"\nAddition is:  "<<num1+num2;
			cout<<"\nSubtraction is:  "<<num1-num2;
			cout<<"\nDivision is:  "<<num1*num2;
			cout<<"\nMultiplication is:  "<<num1/num2;
		}
};

main(){
	
	int num1;
	int num2;
	
	cout<<"Enter Number 1:";
	cin>>num1;
	cout<<"Enter Number 2:";
	cin>>num2;
	calculate cl(num1,num2);
	
}
