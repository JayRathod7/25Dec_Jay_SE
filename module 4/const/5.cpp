#include<iostream>
using namespace std;

class Triangle{
	  private:
	  	int side1;
	  	int side2;
	  	int side3;
	  	
	  	public:
	  		void getTriangleSide(){
	  			cout<<"Enter Side 1:";
	  			cin>>side1;
	  			cout<<"Enter Side 2:";
	  			cin>>side2;
	  			cout<<"Enter Side 3:";
	  			cin>>side3;
			  }
			
			void checkEquilateral(){
				if(side1 == side2 && side2== side3){
					cout<<"This is equilateral Triangle";
				}else if(side1 == side2 || side2 == side3 || side1 == side3){
					cout<<"This is isosceles Triangle";
				}else{
					cout<<"This is scalene Triangle";
				}
			}
};

main(){
	Triangle tl;
	
	tl.getTriangleSide();
	tl.checkEquilateral();
}
