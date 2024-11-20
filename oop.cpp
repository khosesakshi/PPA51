#include<iostream>
using namespace std;

class arithematic
{
	public:
	 int no1;
	 int no2;
	
	arithematic(int A,int B)
	{
		no1=A;
		no2=B;
		
	}
	int addition()
	{
		int ans=0;
		ans=no1+no2;
		return ans;
	}
		int substraction()
	{
		int ans=0;
		ans=no1-no2;
		return ans;
	}
};

int main()
{
 
 int value1=0,value2=0,ret=0;	

cout<<"enter first number:\n";
cin>>value1;

cout<<"enter second number:\n";
cin>>value2;

arithematic obj(value1,value2);

ret=obj.addition();
cout<<"addition is:"<<ret<<"\n";

ret=obj.substraction();
cout<<"substraction is:"<<ret<<"\n";

return 0;
}