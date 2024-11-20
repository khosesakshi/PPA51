#include<stdio.h>

#pragma pack(1)
struct Demo
{
	int i;    //4
	float f;   //4
	char ch;   //1
	double d;  //8

};            //samation:17

union Hello
{
	int i;    //4
	float f;  //4
	char ch;  //1
	double d; //8

	//largest :98
};

int main()
{
	
	struct Demo dobj;
	union Hello hobj;
	
	printf("size of structure:%lu\n",sizeof(dobj));
	printf("size of union:%lu\n",sizeof(hobj));
	
	hobj.i=97;
	hobj.f=10.0;
	
	
	
	return 0;
}