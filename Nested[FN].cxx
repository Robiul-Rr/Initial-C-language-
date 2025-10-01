// Nested loop 
#include<stdio.h>
int main()
{ char name[100];
 printf("Enter your name:\n");
 fgets(name, sizeof(name),stdin);

printf("\n");
    int r,c;
for (c=0;c<4;c++){
	// First loop means column.
	for (r=0;r<5;r++)// 2nd loop means Row
	{ printf("*");}
	printf("\n");}
	
	printf("\nThank you %s\n",name);
	return 0;
}