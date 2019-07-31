#include<iostream>
#include<conio.h>
using namespace std;
class Sample{
	public:
		Sample(){				//Default Constructor
		cout<<"Default Constructor""\n";
	}
	Sample(int x){				//Parametrized COnstructor
		cout<<"Parametrized Constructor:"<<x;
		cout<<"\n";
		
	}
	Sample(const char *x){				//Parametrized Constructor Overloading //Const is used to remove the warning string to char conversion.
		cout<<"Parametrized Constructor:"<<x;
		cout<<"\n";
		
	}
	~Sample(){					//Destructor
	cout<<"Destructor";
	cout<<"\n";
	}
};
int main(){
	Sample sample;
	Sample sample1(20),sample2("Sambhav");
	return 0;
}
