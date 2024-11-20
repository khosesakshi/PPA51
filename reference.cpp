#include<iostream>
using namespace std;

	int main() 
{
	int no=11;
	int &x=no;

cout<<no<<"\n";   //11
cout<<x<<"\n";    //11

cout<<&no<<"\n";  //100
cout<<&x<<"\n";  //100

		return 0;
}