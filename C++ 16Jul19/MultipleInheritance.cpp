#include<iostream>
using namespace std;
class Area{
	public:
		int getArea(int l,int b){
			return l*b;
		}
};
class Perimeter{
	public:
		int getPerimeter(int l,int b){
			return 2*(l+b);
		}
};
class Rectangle : public Area,public Perimeter{				//Multiple Inheritance usage.
	int length;
	int breadth;
	public:
		Rectangle(){
			length=7;
			breadth=4;
				
//			cout<<"Enter Lenght";
//			cin>>length;
//			cout<<"Enter Breadht\n";
//			cin>>breadth;
			}
		int area()
		{
			return Area::getArea(length,breadth);
		}
		int perimeter()
		{
			return Perimeter::getPerimeter(length,breadth);
		}
};
int main(){
	Rectangle r;
	cout<<"Area is:"<<r.area()<<endl;
	cout<<"Perimeter is:"<<r.perimeter()<<endl;
	return 0;
}
