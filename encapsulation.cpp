#include<iostream>
using namespace std;

class demo {

	public:
		int A;
		int B;

		void fun() {
			cout<<"inside fun\n";
		}

		void gun() {
			cout<<"inside gun\n";
		}
};

int main() {
	demo obj;

	cout<<sizeof(obj)<<"\n"; //8

	obj.A=11;
	obj.B=21;

	obj.fun();   //inside fun
	obj.gun();   //inside gun
	
	cout<<obj.A<<"\n";  //11
	cout<<obj.B<<"\n";  //21

	return 0;
}