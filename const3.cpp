#include<iostream>
using namespace std;

class demo
{
	public:
		int no1,no2;
		
		demo(int A,int B)
		{
			no1=A;
			no2=B;
		}
		void fun()
		{
			no1++;
			no2++;
		}
		void gun() const
		{
		//	no1++;		//NA
		//no2++;		//NA
		}
};

int main()
{
	
demo obj1(10,20);
const demo obj2(11,21);	
	
	obj1.fun();
	obj1.gun();
	
//	obj2.fun();
	obj2.gun();
	
	return 0;
}