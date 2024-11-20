#include<iostream>
using namespace std;

class demo
{
	public:
		int no1,no2,no3;
		
		demo(int A=11,int B=21,int C=51)   //parameteried constructor with default arguments
		{
			no1=A;
			no2=B;
			no3=C;
		}
};

int main()
{
	
	demo obj1();
	demo obj1(10);
	demo obj1(10,20);
	demo obj1(10,20,30);
	
	return 0;
}