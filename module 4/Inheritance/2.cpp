#include<iostream>

using namespace std;
class Area{
	public:
	int length;
	int width;
	int area;
	
	void getAreaData(){
		cout<<"Enter Rectangle Length:";
		cin>>length;
		cout<<"Enter Rectangle Width:";
		cin>>width;
	}
};

class Rectangle :public Area{
	
	public:
	void findArea(){
		area = length*width;
		cout<<"\n\nArea of Rectangle is:"<<area;
	}
};

main(){
	Rectangle re;
	re.getAreaData();
	re.findArea();
}
