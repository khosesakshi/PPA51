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
	
	//void display(demo *this,int x)
	void display(int x)
	{
		cout<<"value of no1:"<<this->no1<<"\n";
		cout<<"value of no2:"<<this->no2<<"\n";
		cout<<"value of x:"<<x<<"\n";
		
	}
};
int main()
{
	demo obj(11,21);		
	obj.display(51);		//display(&obj,51) display(100,51);
		
		demo objnew(10,20);		
		objnew.display(30); 		//display(&objnew,30);  display(200,30);
	
	return 0;
}