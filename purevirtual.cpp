#include<iostream>
using namespace std;

class base
{
	public:
		int A,B;
		//1000
		int addition(int no1,int no2)		//concrete method
		{
			return no1+no2;
		}
		virtual int substraction(int no1,int no2)=0; //abstract method 
};

class derived:public base
{
	public:
		int X,Y;
		//2000
		int multiplication(int no1,int no2)		//concrete method
		{
			return no1*no2;
		}
		//3000
		int substraction(int no1,int no2)	//concrete method
		{
			return no1-no2;
		}
};

int main()
{
	//base bobj; not allowed
	derived dobj;
	
	cout<<"addition is:"<<dobj.addition(11,10)<<"\n";
     cout<<"substraction is:"<<dobj.substraction(11,10)<<"\n";
	 cout<<"multiplication is:"<<dobj.multiplication(11,10)<<"\n";
	 
	 cout<<"size of base class:"<<sizeof(base)<<"\n";
	 cout<<"size of derived class:"<<sizeof(derived)<<"\n";
	 	
	return 0;
}