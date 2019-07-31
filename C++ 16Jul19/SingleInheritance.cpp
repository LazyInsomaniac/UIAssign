#include<iostream>
using namespace std;
class Mobile{
	public: 
	void BasicInfo()
	{
		cout<<"All mobiles are used mainly for the following purpose"<<endl;
		cout<<"Make Call \n Text message";
	}
};
class Telephone:public Mobile{
	public: 
	void TeleInfo()
	{
		cout<<"All Telephones are used mainly for the following purpose"<<endl;
		cout<<"Make LandLine Calls,Text Messages,Alarms";
	}
};
class SmartPhone:public Telephone
{
	public:
	void SmartPhoneInfo(){
		cout<<"\nCamera,Bluetooth,"<<endl;
		cout<<"use and app as user wish such as whatsapp""\n";		
	}
};
int main(){
	SmartPhone sp;
	sp.BasicInfo();
	sp.SmartPhoneInfo();
	sp.TeleInfo();
	return 0;
}
