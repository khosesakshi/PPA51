#include<iostream>
using namespace std;


int main()
{
	int no1=10;
	
	const int no2=10;
	
	no1++;//allowed    		//initialisation
	no2++;//not allowed
	
	no1=21;//allowed		//reinitialisation
	no2=21;//not allowed
	
	
	return 0;
}