
#include<stdio.h>
/*
int sumofall(int A[],int size)
{
	int sum=0;
	for(int i=0;i<size;i++)
	{
		sum=sum+A[i];
	}
	return sum;
}

int main()
{
	int A[]={1,2,3,4,5};
	int size=sizeof(A)/sizeof(A[0]);
	printf("Total Sum=%d",sumofall(A,size));
}
*/
int sumofall(int *A,int size)
{
	int sum=0;
	//int size=sizeof(A)/sizeof((A+1));
	for(int i=0;i<size;i++)
	{
		sum=sum+A[i];
	}
	return sum;
}

int main()
{
	int A[]={1,2,3,4,5};
	int size=sizeof(A)/sizeof(A[0]);
	printf("Total Sum=%d",sumofall(A,size));
}
