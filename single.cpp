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

int main()
{
	//base bobj;
	derived dobj;
	
	//cout<<sizeof(bobj)<<"\n";
	//cout<<sizeof(dobj)<<"\n";
	
	cout<<"inside main function\n";
	
	cout<<dobj.i<<"\n";
	cout<<dobj.j<<"\n";
	cout<<dobj.x<<"\n";
	cout<<dobj.y<<"\n";
	
	dobj.fun();
	dobj.gun();
	
	return 0;
}
