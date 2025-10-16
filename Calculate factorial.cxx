// Calculate factorial of a number N.
#include<stdio.h>
int main()
{
	int N,i,s=1,c;
	printf("Enter a number\n");
	c=scanf("%d",&N);
	if (c!=1){
		printf("Wrong input\n");
		return 0;}
	for(i=1;i<=N;i++){
	s=s*i;
	}
	printf("%d! factorial is : %d",N,s);
	return 0;
}
	
	