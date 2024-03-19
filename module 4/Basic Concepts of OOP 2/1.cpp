#include<iostream>
using namespace std;

class calculater{
	public:
		void sum(int n1,int n2){
			cout<<"\nSum is:"<<n1+n2;
		}
		
		void sub(int n1,int n2){
			cout<<"\nSubstraction is:"<<n1-n2;
		}
		
		void multi(int n1,int n2){
			cout<<"\nMultiflication is:"<<n1*n2;
		}
		
		void divide(int n1,int n2){
			cout<<"\ndivide is:"<<n1/n2;
		}
};


main(){
	calculater cl;
	int n1;
	int n2;
	char ch;
	
	cout<<"Option\n1) +\n2) -\n3) *\n4) /\nEnter Number:";
	cin>>ch;
	cout<<"Enter Number 1:";
	cin>>n1;
	cout<<"Enter Number 2:";
	cin>>n2;
	
//	cl.sum(n1,n2);
//	cl.sub(n1,n2);
//	cl.multi(n1,n2);
//	cl.divide(n1,n2);
	
	switch(ch){
		case '1':
			cl.sum(n1,n2);
			break;
			
			case '2':
			cl.sub(n1,n2);
			break;
			
			case '3':
			cl.multi(n1,n2);
			break;
			
			case '4':
			cl.divide(n1,n2);
			break;
			
			default:
			cout<<"Enter valid Number";
	}
	
}
