#include<iostream>
using namespace std;
class Complex{
	private:
		float real;
		float img;
		public:
			Complex():real(0),img(0){}
		 void input(){
			cout<<"Enter Real And Imaginary Parts";
			cin>>real;
			cin>>img;
		}
		Complex operator-(Complex c2){		//Operator Overloading
			Complex temp;
			temp.real=real-c2.real;
			temp.img=img-c2.img;
			return temp;
		}
		void Output(){
			if(img<0)
			cout<<"Output Complex Number:"<<real<<img<<"i";
			else
			cout<<"Output Complex Number:"<<real<<"+"<<img<<"i";
		}
};
int main(){
	Complex c1,c2,result;
	cout<<"Enter first Complex Number \n";
	c1.input();
	cout<<"Enter second Complex Number\n";
	c2.input();
	result=c1-c2;
	result.Output();
	return 0;
}
