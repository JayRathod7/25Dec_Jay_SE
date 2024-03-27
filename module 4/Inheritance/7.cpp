#include<iostream>
using namespace std;

class Bike{
	public:
		 Bike(){
			cout<<"This is bike class"<<endl;
		}
};

class Yamaha :public Bike{
	public:
		 Yamaha(){
			cout<<"This is YAMAHA COMPNEY BIKE"<<endl;
		}
};

class Hero :public Yamaha{
	public:
		 Hero(){
			cout<<"This is HERO COMPNEY BIKE"<<endl;
		}
};

int main(){
	   Hero hero;
	return 0;   
}
