#include<iostream>
using namespace std;
class B;		//Forward Declaration of class
class A{
	int x;
	public:
		void setData(int i)
		{
			x=i;
		}
		friend void min(A,B);		//Friend Func of 2 classes.
};
class B{
	int y;
	public:
		void setData(int i){
			y=i;
		}
		friend void min(A,B);		//Friend Function of 2 classes
};
void min(A a,B b){
	if (a.x<=b.y)
	cout<<a.x<<endl;
	else
	cout<<b.y<<endl;
}
int main(){
	A a;
	B b;
	a.setData(30);
	b.setData(20);
	min(a,b);
	return 0;
}

