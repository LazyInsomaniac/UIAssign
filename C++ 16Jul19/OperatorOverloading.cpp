#include<iostream>
using namespace std;
class check{
	private: 
	int i;
	public:
		check():i(0){}
		void operator ++()
		{  ++i;	}
		void display(){
			cout<<"i="<<i<<endl;
		}
};
int main(){
	check obj;		
	obj.display();//Displays value of data member i for object obj	
	//invokes operator func void operator.
	++obj;		
	obj.display();//diplays the value of data member i for object obj.
	return 0;
}
