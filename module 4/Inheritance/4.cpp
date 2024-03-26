#include<iostream>
using namespace std;

class StudentDetail{
	public:
	char name[20];
	int rollnumber;
	
	void getInfo(){
		cout<<"Enter Student Name:";
		cin.get(name,20);
		cout<<"Enter Student Roll Number:";
		cin>>rollnumber;
	} 	
};

class StudentMarks{
	public:
	char subject[4][10] = {"C","C++","Dart","Java"};
	int mark[10];
	int totlemark=0;
	float pr;

	void getMarks(){
	for(int i =0; i<4;i++){
		cout<<"Enter "<<subject[i]<<" Marks:";
		cin>>mark[i];
		totlemark += mark[i];
	 }
	 pr = totlemark*100/400;
}
};


class School:public StudentDetail,public StudentMarks{
	public:
	void printData(){
		cout<<"\n\n=============== RESULT ===============\n";
		cout<<"Student Name:\t\t"<<name;
		cout<<"\nStudent Roll Number:\t"<<rollnumber;
		
		cout<<"\n\nSubject\t\tMax Marks\tMarks\n";
		for(int i =0;i<4;i++){
			cout<<subject[i]<<"\t\t"<<"   100  "<<"\t "<<mark[i]<<endl;
		}
		cout<<"\n";
		cout<<"TOTLE MARKS:"<<totlemark<<endl;
		cout<<"PR:\t"<<pr<<endl;
		if(pr>=70){
	 		cout<<"RESULT: Distinction";
		}else if(pr>60){
			cout<<"RESULT: First Class";
		}else if(pr>50){
			cout<<"RESULT: Second Class";
		}else if(pr>40){
				cout<<"RESULT: PASS";
		}else{
				cout<<"RESULT: FAIL";
		}
	}	
};

main(){
	School school;
	school.getInfo();
	school.getMarks();
	school.printData();
	
}
