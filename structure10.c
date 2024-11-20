#include<stdio.h>

struct Demo
{
	int no;
	float f;
	
};

struct PPA
{
	int x;
	struct Demo dobj;
	int y;
};

int main()
{
	
struct PPA obj;	
obj.x=10;
obj.y=20;
obj.dobj.no=11;
obj.dobj.f=3.14;

	return 0;
}