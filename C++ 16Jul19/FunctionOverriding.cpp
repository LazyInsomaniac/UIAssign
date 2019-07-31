#include<iostream>
using namespace std;
class Shape{
	public:
		virtual void draw(){					//virtual function
			cout<<"drawing..."<<endl;
		}
};
class Rectangle:public Shape					//inheriting shape class
{
	public:
		void draw()
		{
			cout<<"Drawing Rectangle..."<<endl;
		}
};
class circle:public Shape{						//inheriting Shape class
	public:
		void draw(){
			cout<<"Drawing Circle...."<<endl;			
		}
};

int main(void){
	Shape *s;
	Shape sh;
	Rectangle rec;
	circle cir;
	s=&sh;
	s->draw();
	s=&rec;
	s->draw();
	s=&cir;
	s->draw();
	return 0;
}
