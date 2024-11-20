#include<stdio.h>

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
	
	printf("enter first number:\n");
	scanf("%d",&value1);
	
	printf("enter second number:\n");
	scanf("%d",&value2);
	
	ret=addition(value1,value2);
	printf("addition is:%d\n",ret);
	
	ret=substraction(value1,value2);
	printf("substraction is:%d\n",ret);
	
	return 0;
}