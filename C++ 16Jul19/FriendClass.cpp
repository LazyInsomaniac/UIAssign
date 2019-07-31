#include<iostream>
using namespace std;
class A{
	int x=5;
	friend class B;				//Friend Class B
};
class B{

	public:
		void display(A a1)
		{
			cout<<"Value of X is:"<<a1.x<<endl;
		}
};
int main(){
	A a;
	B b;
	b.display(a);
	return 0;
}
