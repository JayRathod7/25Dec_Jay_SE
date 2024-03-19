#include<iostream>
using namespace std;

class Rectangle{
	private:
		int length;
		int width;
		
	public:
		int area;
		int perimeter;
		
		void getDetail(){
			cout<<"Enter Rectangle Length:";
			cin>>length;
			cout<<"Enter Rectangle Width:";
			cin>>width;	
		}
		
		void findArea(){
			cout<<"\n==========Area Of Rectangle==========";
			area = length*width;
			cout<<"\nArea of Rectangle is:"<<area<<"\n";
		}
		void findperimeter(){
			cout<<"\n==========Perimeter Of Rectangle==========";
			perimeter = (length*width)*2;
			cout<<"\nPerimeter of Rectangle is:"<<perimeter<<"\n";
		}
};

main(){
	Rectangle re;
	re.getDetail();
	re.findArea();
	re.findperimeter();
}
