//Write a programe to check prime number
#include<stdio.h>
int main()
{ int n,r,d,f=0;
printf("Enter a number:\n");
scanf("%d",&n);
if(n<2)
{f=1;}
for (d=2;d<n;d++)
{ 
r=n%d;
if(r==0)
{ f=1;
break;}}

if (f==0)
{printf("Prime Number\n");}
else if(f==1)
{printf("Not A Prime Number\n");}

return 0;
}