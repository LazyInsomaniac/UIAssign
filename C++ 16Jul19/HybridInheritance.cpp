#include<iostream>
using namespace std;
int a,b,c,d,e;
	class A{
	public:
		void getAB(){
			cout<<"Enter Two Numbers A & B\n";
			cin>>a>>b;
		}
	};
	class B:public A{
	public:
		void getC(){
			cout<<"Enter a Number C\n";
			cin>>c;
		}
	};
	class C{
	public:
		void getD(){
			cout<<"Enter a Number D\n";
			cin>>d;
		}
	};
	class D:public B ,public C{
	public:
		void Add(){
			e=a+b+c+d;
			cout<<"Addition is\n"<<e;
		}
	};
int main(){
	D d1;
	d1.getAB();
	d1.getC();
	d1.getD();
	d1.Add();
	
	return 0;
}
