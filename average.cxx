// Average of 3 numbers
#include<stdio.h>
int main()
{ int a,b,c,A; // A means Average
char name[50];
printf("Enter your name:\n");
scanf("%s",name);
printf("Enter number 3 number:\n");
int n=scanf("%d%d%d",&a,&b,&c);
if (n!=3){printf("Wrong input\n"); return 0;}
A=(a+b+c)/3;
printf("Average is:%d\n",A);
printf("Thank You %s",name);
return 0;
}