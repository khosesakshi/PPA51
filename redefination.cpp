#include<iostream>
using namespace std;

class base
{
	public:
		void fun()		//defination
		{
			cout<<"inside base fun\n";
		}
};

class derived:public base
{
	public:
		void fun()		//redefination
		{
			cout<<"inside derived fun\n";
		}
};

int main()
{
	
	cout<<sizeof(base)<<"\n";		//1 byte
		base bobj;
		bobj.fun();
		    
				derived dobj;
				dobj.fun();
	return 0;
}