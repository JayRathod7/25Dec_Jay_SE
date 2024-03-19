#include<ioStream>
using namespace std;

class Circle{
	
	private:
		double radius;
	
	public:
	    double pi = 3.14;
	    double area;
	    double circum;
		
		void areaofcircle(){
			cout<<"Enter Radius of Circle:";
			cin>>radius;
		} 
		
		
		void pritdata(){
			area = pi*radius*radius;
			circum = 2*pi*radius;
			cout<<"\nArea of Circle is:"<<area;
			cout<<"\nCircumference of Circle is:"<<circum;
		}		
};


main(){
	Circle circle;
	circle.areaofcircle();
	circle.pritdata();
}
