#include<iostream>
using namespace std;

class base
{
public:
int i,j;

base()
{
	cout<<"inside base constructor\n";
	i=10;
	j=20;
	}	
	~base()
	{
		cout<<"inside base destructor\n";
	}
	void fun()
	{
		cout<<"inside base fun\n";
	}
	
};

class derived:public base
{
	public:
		int x,y;
		derived()
		{
			cout<<"inside derived constructor\n";
		x=30;
		y=40;
		}
		~derived()
		{
			cout<<"inside derived destructor\n";
		}
		void gun()
		{
			cout<<"inside derived gun\n";
		}
	
};

class derivedx:public derived
{
 public:
 int a,b;
 derivedx()
 {
 	cout<<"inside derivedx constructor\n";
 	a=50;
 	b=60;
	 }	
	 ~derivedx()
	 {
	 	cout<<"inside derivedx destructor\n";
	 }
	 void sun()
	 {
	 	cout<<"inside derivedx sun\n";
	 }
};

int main()
{
	//base bobj;
	derivedx dobj;
	
	//constructor:base->derived->derivedx
	
	//cout<<sizeof(bobj)<<"\n";
	//cout<<sizeof(dobj)<<"\n";
	
	cout<<"inside main function\n";
	
	cout<<" size of base class "<<sizeof(base)<<"\n"; 			//8
    cout<<" size of derived class "<<sizeof(derived)<<"\n";		//16
	cout<<" size of derivedx class "<<sizeof(derivedx)<<"\n";	//24
	
	cout<<dobj.i<<"\n"; 	//10
	cout<<dobj.j<<"\n";		//20
	cout<<dobj.x<<"\n";		//30
	cout<<dobj.y<<"\n";		//40
	cout<<dobj.a<<"\n";		//50
	cout<<dobj.b<<"\n";		//60
	
	dobj.fun();		//inside fun of base
	dobj.gun();		//inside gun of derived
	dobj.sun();		//inside un of derivedx
	
	//destructor:derivedx->derived->base
	return 0;
}
