#include<stdio.h>

int value = 11;      //extern
int data;			 //extern

void Demo()
{
	int i = 10;				//auto
	static int j = 20;		//static
	register int k = 30;	//register
	
	printf("Inside demo function\n");
}

int main()
{
	int *p = NULL;
	p = (int*)malloc(5 * sizeof(int));  //dynamic memory
	
	Demo ();
	
	return 0;
}