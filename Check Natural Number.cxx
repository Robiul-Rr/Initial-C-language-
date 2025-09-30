//Write a program to check if the given number is a natural.
#include<stdio.h>
int main()
{ int n;
printf("Enter a number:\n");
 int N=scanf(" %d", &n);
 if (N!=1)
 { printf(" not natural number\n");}
 else if(n<=0)
 { printf(" not natural number\n");}
 else
 { printf(" Natural number\n");}
 printf(" Thank You\n");
 return 0;
}