#include<iostream>
using namespace std;

class demo
{
	//access specifiers(private(default))
	public:
	int no1,no2;
	const int no3;
	const int no4;
	
	demo():no3(30),no4(40)
	{
	no1=10;
	no2=20;
	}
	
		demo(int A,int B,int C,int D):no3(C),no4(D)
	{
	no1=A;
	no2=B;
	}
};

int main()
{
	demo obj1;
	cout<<obj1.no1<<"\t"<<obj1.no2<<"\t"<<obj1.no3<<"\t"<<obj1.no4<<"\n";
	
	demo obj2(11,21,51,101);
	cout<<obj2.no1<<"\t"<<obj2.no2<<"\t"<<obj2.no3<<"\t"<<obj2.no4<<"\n";
	
	obj1.no1++;
	obj1.no2++;
	//obj1.no3++;
	//obj.no4++;
	
	return 0;
}