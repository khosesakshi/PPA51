#include<iostream>
using namespace std;

void display(int A=10,int B=20,int C=30)
{
	cout<<A<<"\t"<<B<<"\t"<<C<<"\n";
}

int main()
{
	display();			//10,20,30
	display(11);		//10,20,30
	display(11,21);		//11,21,30
	display(11,21,51);	//11,21,51

	return 0;
}