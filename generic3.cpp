#include<iostream>
using namespace std;

float Addition(float no1,float no2) {
	float Ans = 0;
	Ans = no1 + no2;
	return Ans;
}

int main()
 {
	float A = 10.90f, B=11.60f;

	cout<<Addition(A,B)<<"\n";

	return 0;
}