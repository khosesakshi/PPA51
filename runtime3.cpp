#include<iostream>
using namespace std;

class base
{
	public:
		int i,j;
		virtual void fun()			//1000
		{
			cout<<"inside base fun\n";
		}
		void gun()					//2000
		{
		cout<<"inside base gun\n";
		}
		 virtual void sun()			//3000
		{
			cout<<"inside base sun\n";
		}
		virtual void run()			//4000
		{
			cout<<"inside base run\n";
		}
};

class derived:public base
{
	public:
		int x,y;
		virtual void fun()		//5000
		{
			cout<<"inside derived fun\n";
		}
		
		void gun()		        	//6000
		{
			cout<<"inside derived gun\n";
		} 
		
		virtual void mun()			//7000
		{
			cout<<"inside derived mun\n";
		}
	   void run()			//7000
		{
			cout<<"inside derived run\n";		//8000
		}
};

int main()
{	
		cout<<"size of base class:"<<sizeof(base)<<"\n";		//8
		cout<<"size of derived class:"<<sizeof(derived)<<"\n";	//16
	
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
