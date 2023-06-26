#include<stdio.h>
int main()
{
	int marks;
	printf("enter the marks:");
	scanf("%d",&marks);
	if(marks<35)
	{
		printf("pass");
	}
	
		else if(marks<60)
		{
			printf("A");
			
		}
		else 
		{
			printf("A+");
			
		}
	
	return 0;
}