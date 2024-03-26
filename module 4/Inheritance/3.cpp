#include<iostream>
using namespace std;

class Person{
	
	public:
	char name[20];
	int age;
	
	void getPersonData(){
		cout<<"Enter Name:";
		cin>>name;
		cout<<"Enter Age:";
		cin>>age;
	}
};

class Student{
	public:
	  int percentage;
	  
 		void getStudentP(){
 			cout<<"Enter Your Percentage:";
 			cin>>percentage;
		 }
};

class Teacher{
	public:
	char t_name[20];
	int salary;
	
		void getsalary(){
			cout<<"Enter Teacher Name:";
			cin>>t_name;
			cout<<"Enter Teacher Salary:";
			cin>>salary;
		}
};

class PrintData :public Person, public Student, public Teacher{
	public:
		void output(){
			cout<<"\nName is:\t\t"<<name;
			cout<<"\nAge is:\t\t\t"<<age;
			cout<<"\nPercentage is:\t\t"<<percentage;
			cout<<"\nTeacher name is:\t"<<t_name;
			cout<<"\nSalary is:\t\t"<<salary;
		}
};

main(){
	PrintData final;
	
	cout<<"====Enter Your Details====\n";
	final.getPersonData();
	cout<<"\n\n====Enter Youer Percentage====\n";
	final.getStudentP();
	cout<<"\n\n====Enter TeacherSalary====\n";
	final.getsalary();
	cout<<"\n\n==========FINAL DATA==========";
	final.output();
}
