#include<iostream>
using namespace std;

double Addition(double no1,double no2) {
	double Ans = 0;
	Ans = no1 + no2;
	return Ans;
}

int main()
 {
	double A = 10.90, B=11.60;

	cout<<Addition(A,B)<<"\n";

	return 0;
}