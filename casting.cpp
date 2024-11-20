#include<iostream>
using namespace std;

class base
{
	public:
		int i,j;
		void fun()		//defination
		{
			cout<<"inside base fun\n";
		}
};

class derived:public base
{
	public:
		int i,j;
		void fun()		//redefination
		{
			cout<<"inside derived fun\n";
		}
};

int main()
{
	
	//cout<<sizeof(base)<<"\n";		//1 byte
		base bobj;
		derived dobj;
		
		base *bptr=NULL;
		derived *dptr=NULL;
		
		bptr=&bobj;		//nocasting
		dptr=&dobj;		//nocasting
	
	    bptr=&dobj;		//upcasting
		
		dptr=&bobj;		//downcasting
			
	return 0;
}