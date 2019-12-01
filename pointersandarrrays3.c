
#include<stdio.h>
#include<string.h>

void print(char *c)
{
	c[0]='A';
	while(*c != '\0')
	{
		printf("%c", *c);
		c++;
	}
	printf("\n");
}

int main()
{
	char c[12]="Hello";
	
	print(c);
}
