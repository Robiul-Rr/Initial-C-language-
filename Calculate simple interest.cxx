//Calculate "Simple interest" from principle(p), Rate(R) & Time(T)
#include<stdio.h>
int main()
{
	float i,p,r,t;
	printf("Enter Principle:\n");
	scanf("%f",&p);
	printf("Enter Rate:\n");
	scanf("%f",&r);
	printf("Enter Time:\n");
	scanf("%f",&t);
	i=p*t*r;
	printf("Simple interest = %f\n",i);
	return 0;
}