#include<stdio.h>

int main()
{
	 int no = 0;
	 int result = 0;
	 
	printf("enter the number:\n");
	scanf("%d",&no);
	
	result = no % 2;
	
	if(result == 0)
	{
		printf("it is even number\n");
	}
    else
	{
		printf("it is odd number\n");
	}	
	
	return 0;
}