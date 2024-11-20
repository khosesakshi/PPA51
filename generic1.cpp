#include<iostream>
using namespace std;

int Addition(int no1,int no2)
{
	int Ans = 0;
	Ans = no1 + no2;
	return Ans;
}

int main()
{
	int A = 10, B=11;
	
	cout<<Addition(A,B)<<"\n";
	
	return 0;
}