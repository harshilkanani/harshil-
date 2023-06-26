#include<stdio.h>
#include<math.h>
int main()
{
	float P=1000;
	float R=4;
	float n=3;
	float A;
	
	A=P*pow((1+R/100),n);
	printf("value of A is %f\n",A);
	return 0;
}