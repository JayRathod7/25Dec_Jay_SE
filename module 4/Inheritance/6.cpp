#include<iostream>

using namespace std;

class Perent{
	private:
		int privateMember;
	
	public:
	    int publicMember;
	
	protected:
	    int protectedMember;
			
};

class Child :public Perent{
	public:
		void accessclass(){
//			privateMember = 10; //private member 
			publicMember = 100;
			protectedMember = 500;
			
			cout<<"private member not access in other class\n";
			cout<<"public member access value is:"<<publicMember<<endl;
			cout<<"Protected member access value is:"<<protectedMember;
		}
};

main(){
	Child child;
	child.accessclass();
	child.publicMember = 40;
	
	cout<<"\npublic member access in main function:"<<child.publicMember;
	
}
