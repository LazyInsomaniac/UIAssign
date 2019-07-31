#include<iostream>
using namespace std;
class Sample{
	public:
		static int i;
		void method1(){
		i++;
			cout<<"i="<<i<<"\n";
			
		}
};
int Sample::i=10;	//Static Declaration.
int main(){
	Sample s[5];
	for(int i=0;i<5;i++){
		s[i].method1();
	}
	return 0;
}

