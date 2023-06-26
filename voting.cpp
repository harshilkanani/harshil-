#include<stdio.h>
int main()
{
	int age;
	printf("enter the age :");
	
	scanf("%d",&age);
	if(age>18)
	{
		printf("you can voting");
		
	}
	else
	{
		printf("you can not voting");
	}
	return 0;
}