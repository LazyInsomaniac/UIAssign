#include<iostream>
using namespace std;
class A{
	public:
	int car;
	carInfo(){
		cout<<"Blah Blah Blah\n";
		
	}
};
class B:public A{
	int carType;
	void carTypeB(){
		cout<<"car type is B\n";
	}
};
class C:public A{
	int carType;
	void carTypeC(){
		cout<<"car type is C\n";
	}
};
class D:public A{
	int carType;
	void carTypeD(){
		cout<<"car type is D\n";
	}
};
int main(){
	A a;
	B b;
	C c;
	D d;
	a.carInfo();
	b.carInfo();
	c.carInfo();
	d.carInfo();
}
