#include<stdio.h>

int main()
{
	int standard=0;
	
	printf("enter your standard:\n");
	scanf("%d",&standard);
	
	switch(standard)
	{
		
		case 1:
		printf("your exam is at 8AM\n");
		break;
		
			case 2:
		printf("your exam is at 9AM\n");
		break;
		
			case 3:
		printf("your exam is at 10AM\n");
		break;
		
			case 4:
		printf("your exam is at 11AM\n");
		break;
	    
	    default:
	    	printf("you entered wrong choice\n");
	    	
	}
	return 0;
}