#include<iostream>
using namespace std;

class base
{
	public:
		int i,j;
		void fun()	
		{
			cout<<"inside base fun\n";
		}
		void gun()
		{
		cout<<"inside base gun\n";
		}
		void sun()
		{
			cout<<"inside base sun\n";
		}
		void run()
		{
			cout<<"inside base run\n";
		}
};

class derived:public base
{
	public:
		int x,y;
		void fun()		
		{
			cout<<"inside derived fun\n";
		}
		
		void sun()
		{
			cout<<"inside derived sun\n";
		}
		
		void mun()
		{
			cout<<"inside derived mun\n";
		}
};

int main()
{
	
		derived dobj;
		base *bptr=NULL;
		
	    bptr=&dobj;		//upcasting
		
		bptr->fun();		//base fun
		bptr->gun();		//base gun
		bptr->sun();		//base sun
		bptr->run();		//base run
		//bptr->mun();		//error
		
	return 0;
}
