#include<stdio.h>

void Increment(int *a)
{
	*a=*a+1;
	printf("%p\n",&a);
	Increment(a);
}

int main()
{
	int a=10;
	Increment(&a);
	printf("a=%d ",a);
	printf("Address of a=%p",&a);
}
