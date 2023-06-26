#include<stdio.h>
int main()
{
	int age;
	printf("enter the age :");
	scanf("%d",&age);
	if(age>18)
	{
		printf("you can drive");
		
	}
	else
	{
		printf("you can not drive");
	}
	return 0;
}