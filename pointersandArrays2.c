
#include<stdio.h>

int main()
{
	char c1[6]="Hello";
	char *c2;
	c2=c1;
	c2[0]="A";
	c2[1]="B";
	c2[3]="C";
	printf("%s ",c2);
}
