#include<iostream>
using namespace std;

class demo {
	public:
		int no1,no2;

		demo(int A,int B) {
			no1=A;
			no2=B;
		}
};

demo operator*(demo op1,demo op2) 
{
	//demo(10*30,20*40)->(40,60)
	
	return demo(op1.no1*op2.no1,op1.no2*op2.no2);
}

int main() {
	demo obj1(10,20);
	demo obj2(30,40);

	demo obj3(0,0);
	obj3=obj1*obj2;			//+(obj1,obj2);

	cout<<obj3.no1<<"\t"<<obj3.no2<<"\n";

	return 0;
}