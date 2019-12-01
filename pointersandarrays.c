
#include<stdio.h>

int main()
{
	int a[5];
	
	for(int i=0;i<5;i++)
	{
		a[i]=i;
	}
	
	int *p=a;
	
	for(int i=0;i<5;i++)
	{
		printf("%d \n",*(p+i));
	}
	
	char *c="Pratham anchan is Great";
	printf("%c",*c);
	printf("%c",*(c+1));

}
