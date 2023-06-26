#include<stdio.h>
int main()
{
	int a=34;
	int b=45;
	printf(" swapping value of a is %d b is %d\n",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("before swapping value of a is %d b is %d\n",a,b);

	return 0;
}