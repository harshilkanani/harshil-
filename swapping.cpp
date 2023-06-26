#include<stdio.h>
int main()
{
	int a=12;
	int b=23;
	int c;
	printf("\n befor swapping value of a is%d b is%d",a,b);
	c=a;
	a=b;
	b=c;
	printf("\n after swapping value of a is%d b is%d",a,b);
	return 0;
}