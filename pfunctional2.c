#include<stdio.h>

int addition(int value1,int value2) 
{
	int result=0;

	result=value1+value2;

	return result;

}

int main()
 {
	int no1=0,no2=0,ans=0;

	printf("enter first number:\n");
	scanf("%d",&no1);

	printf("enter second number:\n");
	scanf("%d",&no2);

	ans=addition(no1,no2);

	printf("addition is: %d\n",ans);

	return 0;
}