#include<iostream>
using namespace std;

class Employee{
		int id,salary;
		char name[10],gender[10];
	public :void getEmployeeDetails(){
		cout<<"Enter Id,Name,gender,salary";
		cin>>id>>name;	
		cin>>gender;
		cin>>salary;		
	}
	public:void	putEmployeeDetails(){
		cout<<"Employee Details are:""\n";
		cout<<"ID:\t"<<id<<"\n";
		cout<<"Name:\t"<<name<<"\n";
		cout<<"Salary:\t"<<salary<<"\n";
		cout<<"Gender:\t"<<gender<<"\n";
	}
};
int main(){
	Employee emp;
	emp.getEmployeeDetails();
	emp.putEmployeeDetails();
	return 0;
}

