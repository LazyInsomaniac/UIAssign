#include<iostream>
using namespace std;
int main(){
	int n1,n2,result;
	cout<<"1st number:";
	cin>>n1;
	cout<<"2nd number:";
	cin>>n2;
	try{
		if(n2==0)
			throw n2;					//Exception
		else{
			result=n1/n2;
			cout<<"\n The Result is:"<<result;
		}
	}
	catch(int x){
		cerr<<"\n  Can't divided by:"<<x;
		
	}
	cout<<"\n End of Program.";
	return 0;
}
