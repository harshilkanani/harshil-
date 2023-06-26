#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the value of a and b nd c");
	scanf("%d%d%d",&a,&b,&c);
	if(a<b)
	{
		if(a<c)
		{
			printf("a is minimum");	
		}
		else
		{
			printf("c is minimum");
		}
	}
	else if(b<c)
	{
		printf("b is minimum");
	}
	else
	{
		printf("c is minimum");
	}
	
	return 0;
}