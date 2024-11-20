#include<iostream>
using namespace std;

class demo
{
	public:
		int A,B;
		
		demo()
		{
			A=0;
			B=0;
		}
		demo(int i,int j)
		{
			A=i;
			B=j;
		}
		demo(demo &ref)
		{
			A=ref.A;
			B=ref.B;
		}
		~demo()
		{
			cout<<"inside destructor\n";
		}
};

int main()
{
	demo obj1(11,21);
	demo obj2(obj1);
	
	cout<<obj1.A<<"\t"<<obj1.B<<"\n";
	cout<<obj2.A<<"\t"<<obj2.B<<"\n";
	
	return 0;
}