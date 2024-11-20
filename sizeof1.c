#include<stdio.h>

int main()
{
	int no=2;
	float f=20.30;
	char ch='S';
	double d=90.8976;
	
	
	printf("%d\n",sizeof(no));
	printf("%f\n",sizeof(f));
	printf("%c\n",sizeof(ch));
	printf("%lf\n",sizeof(d));
	
	return 0;
}