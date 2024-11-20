#include<iostream>

using namespace std;
int addition(int no1,int no2)
{
	int ans=0;
	ans=no1+no2;
	return ans;
}

int substraction(int no1,int no2)
{
	int ans=0;
	ans=no1-no2;
	return ans;
}

int main()
{
 int value1=0,value2=0,ret=0;
 
 cout<<"enter first number\n";
 cin >>value1;
 
 cout<<"enter second number\n";
 cin>>value2;
 	
 ret=addition(value1,value2);
 cout<<"addition is:"<<ret;
 
 ret=substraction(value1,value2);
 cout<<"substraction is:"<<ret;
 	
	return 0;
}