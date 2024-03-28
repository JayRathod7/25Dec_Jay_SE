#include <iostream>

using namespace std;

template<typename T>

void swapValues(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

main() {
    int int1 ;
	int int2 ;
	
	cout<<"Enter Number 1:";
	cin>>int1;
	cout<<"Enter Number 2:";
	cin>>int2;
   
    cout << "Before swapping:" << endl;
    cout << "int1: " << int1 << ", int2: " << int2 << endl;

    swapValues(int1, int2);
    
	cout << "After swapping:" <<endl;
    cout << "int1: " << int1 << ", int2: " << int2 << endl;

    return 0;
}

