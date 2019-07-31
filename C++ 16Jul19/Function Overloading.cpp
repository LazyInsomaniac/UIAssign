#include<iostream>
#include<conio.h>
using namespace std;
class Calci{
	public:
		int total;
		float tot;
		void Addition(int num1,int num2){
			total=num1+num2;
			cout<<"Addition of Given Integers are:"<<total<<"\n";
		}
		void Addition(float num1,float num2){
			tot=num1+num2;
			cout<<"Addition of Given Float Values are:"<<tot<<"\n";
		}
};

int main(){
	Calci cal;
	cal.Addition(5,7);
	cal.Addition(1.3f,2.5f);
	return 0;
}

