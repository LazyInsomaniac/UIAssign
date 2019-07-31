#include<iostream>
using namespace std;
template<class T>
	T Sum(T n1,T n2){	//Template Function	Used when we don't know the return data type.
	T rs;
	rs=n1+n2;
	return rs;	
	}			
int main(){
	int A=10,B=20,C;
	long I=11,J=32,K;
	string x="hello",y="welcome",z;
	C=Sum(A,B);
	cout<<"\n The sum of Integer Values:"<<C;	
	K=Sum(I,J);									//Calling Template Function
	cout<<"\n The sum of Long Values is:"<<K;
	z=Sum(x,y);									//Calling Template Function
	cout<<"\n The sum of Long Values is:"<<z;
	return 0;
}
